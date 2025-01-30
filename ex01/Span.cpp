
#include "Span.hpp"
#include <limits>

Span::Span(unsigned int const N) : maxNumberCount(N)
{
	numbers.reserve(N);
}

Span::Span(Span const &other)
{
	this->maxNumberCount = other.maxNumberCount;
	this->numbers = other.numbers;
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		this->maxNumberCount = other.maxNumberCount;
		this->numbers = other.numbers;
	}
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int number)
{
	if (numbers.size() >= maxNumberCount)
		throw std::runtime_error("Error: Span is already full!");
	numbers.push_back(number);
}

int	Span::shortestSpan()
{
	int		shortest = std::numeric_limits<int>::max();
	int		last = 0;
	bool	first = true;

	if (numbers.size() < 2)
		throw std::runtime_error("Error: Span has less than 2 numbers!");

	std::sort(numbers.begin(), numbers.end());

	for (auto &it : numbers)
	{
		if (first)
		{
			first = false;
			last = it;
			continue;
		}
		shortest = std::min(shortest, it - last);
		last = it;
	}
	return (shortest);
}

int	Span::longestSpan()
{
	if (numbers.size() < 2)
		throw std::runtime_error("Error: Span has less than 2 numbers!");

	std::sort(numbers.begin(), numbers.end());

	return (numbers.back() - numbers.front());
}
