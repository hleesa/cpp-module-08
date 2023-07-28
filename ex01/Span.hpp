
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

	void addNumber(long number);

	long shortestSpan();

	long longestSpan();

	template<typename Iterator>
	void add(Iterator begin, Iterator end) {
		for (Iterator it = begin; it != end; ++it) {
			addNumber(*it);
		}
		return;
	}
};

#endif //CPP_HLEESA_SPAN_HPP
