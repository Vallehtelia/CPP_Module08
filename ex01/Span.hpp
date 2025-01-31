
#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

class Span
{
	private:
		unsigned int		maxNumberCount;
		std::vector<int>	numbers;
	public:
		Span() = delete;
		Span(unsigned int const N);
		Span(Span const &other);
		Span &operator=(Span const &other);
		~Span();

		void	addNumber(int number);
		int		shortestSpan();
		int		longestSpan();

		template <typename T>
		void	addNumbers(T begin, T end)
		{
			if (std::distance(begin, end) + numbers.size() > maxNumberCount)
				throw std::runtime_error("Error: Numbers dont fit in the Span!");
			numbers.insert(numbers.end(), begin, end);
		}
};
