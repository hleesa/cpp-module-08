
#ifndef CPP_HLEESA_SPAN_HPP
#define CPP_HLEESA_SPAN_HPP

#include <set>
#include <exception>
#include <limits>


template<typename T>
class Span {

private:
	std::set <T> container;
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
		container = other.container;
		maxSize = other.maxSize;
	}

	void addNumber(T number) {
		if (container.size() >= maxSize) {
			throw SizeFullException();
		}
		container.insert(number);
	}

	T shortestSpan() {
		if (container.size() < 2) {
			throw NoSpanFoundException();
		}
		T sSpan = std::numeric_limits<T>::max();
		typename std::set<T>::const_iterator it = container.begin();
		typename std::set<T>::const_iterator next = it;
		++next;
		while (next != container.end()) {
			T candi = *next - *it;
			if (candi < sSpan) {
				sSpan = candi;
			}
			++it;
			++next;
		}
		return sSpan;
	}

	T longestSpan() {
		if (container.size() < 2) {
			throw NoSpanFoundException();
		}
		return *container.rbegin() - *container.begin();
	}
};


#endif //CPP_HLEESA_SPAN_HPP
