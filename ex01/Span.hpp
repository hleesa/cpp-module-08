
#ifndef CPP_HLEESA_SPAN_HPP
#define CPP_HLEESA_SPAN_HPP

#include <set>
#include <exception>
#include <limits>

class Span {

private:
	std::set<long> container;
	unsigned int maxSize;

public:
	class SizeFullException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Container is full";
		}
	};

	class NoSpanFoundException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "There is no span";
		}
	};

	Span() : maxSize(0) {
	}

	Span(unsigned int N) : maxSize(N) {
	}

	Span(const Span& other) : container(other.container), maxSize(other.maxSize) {
	}

	Span& operator=(const Span& other) {
		if (this != &other) {
			container = other.container;
			maxSize = other.maxSize;
		}
		return *this;
	}

	void addNumber(long number) {
		if (container.size() >= maxSize) {
			throw SizeFullException();
		}
		container.insert(number);
	}

	long shortestSpan() {
		if (container.size() < 2) {
			throw NoSpanFoundException();
		}
		long sSpan = std::numeric_limits<long>::max();
		std::set<long>::const_iterator it = container.begin();
		std::set<long>::const_iterator next = it;
		++next;
		while (next != container.end()) {
			long candi = *next - *it;
			if (candi < sSpan) {
				sSpan = candi;
			}
			++it;
			++next;
		}
		return sSpan;
	}

	long longestSpan() {
		if (container.size() < 2) {
			throw NoSpanFoundException();
		}
		return *container.rbegin() - *container.begin();
	}

	template<typename Iterator>
	void add(Iterator begin, Iterator end) {
		for (Iterator it = begin; it != end; ++it) {
			addNumber(*it);
		}
		return;
	}
};

#endif //CPP_HLEESA_SPAN_HPP
