
#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <exception>
#include <limits>

class Span {

private:
	std::multiset<long> container;
	unsigned int maxSize;

public:
	class SizeFullException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class NoSpanFoundException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	Span();

	Span(unsigned int N);

	Span(const Span& other);

	Span& operator=(const Span& other);

    ~Span();

	void addNumber(long number);

	long shortestSpan();

	long longestSpan();

	template<typename Iterator>
	void add(Iterator begin, Iterator end) {
        container.insert(begin, end);
        if (container.size() > maxSize)
            throw SizeFullException();
		return;
	}
};

#endif //SPAN_HPP
