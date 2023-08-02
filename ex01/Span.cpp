
#include "Span.hpp"

const char* Span::SizeFullException::what() const throw() {
    return "Container is full";
}

const char* Span::NoSpanFoundException::what() const throw() {
    return "There is no span";
}

Span::Span() : maxSize(0) {
}

Span::Span(unsigned int N) : maxSize(N) {
}

Span::Span(const Span& other) : container(other.container), maxSize(other.maxSize) {
}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        container = other.container;
        maxSize = other.maxSize;
    }
    return *this;
}

Span::~Span() {
}

void Span::addNumber(long number) {
    if (container.size() >= maxSize)
        throw SizeFullException();
    container.insert(number);
}

long Span::shortestSpan() {
    if (container.size() < 2)
        throw NoSpanFoundException();
    long sSpan = std::numeric_limits<long>::max();
    std::multiset<long>::const_iterator it = container.begin();
    std::multiset<long>::const_iterator next = it;
    for (++next; next != container.end(); ++it, ++next) {
        long candi = *next - *it;
        if (candi < sSpan)
            sSpan = candi;
    }
    return sSpan;
}

long Span::longestSpan() {
    if (container.size() < 2)
        throw NoSpanFoundException();
    return *container.rbegin() - *container.begin();
}
