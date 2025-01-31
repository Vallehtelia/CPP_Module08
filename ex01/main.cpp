
#include "Span.hpp"

#define RED "\033[31m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

int	main()
{
	{
		std::cout << std::endl << CYAN << "Test 1 within limits" << RESET << std::endl;
		try
		{
			Span sp = Span(5);
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(12);
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl << CYAN << "Test 2 out of limits" << RESET << std::endl;
		try
		{
			Span sp = Span(5);
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(11);
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl << CYAN << "Test 3 shortest and longest span with 1 number" << RESET << std::endl;
		try
		{
			Span sp = Span(5);
			sp.addNumber(5);
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		try
		{
			Span sp = Span(5);
			sp.addNumber(5);
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl << CYAN << "Test 4 addNumbers within limits" << RESET << std::endl;
		try
		{
			Span sp = Span(10);
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::vector<int> v = {5, 3, 17, 9, 11};
			sp.addNumbers(v.begin(), v.end());
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl << CYAN << "Test 5 addNumbers out of limits and zero range" << RESET << std::endl;
		try
		{
			Span sp = Span(5);
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::vector<int> v = {5, 3, 17, 9, 11, 11};
			sp.addNumbers(v.begin(), v.end());
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		try
		{
			Span sp = Span(5);
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::vector<int> v = {};
			sp.addNumbers(v.begin(), v.begin());
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl << CYAN << "Test 6 addNumbers with 100k elements" << RESET << std::endl;
		try
		{
			Span sp = Span(100000);
			std::vector<int> v;
			for (int i = 0; i < 100000; i++)
				v.push_back(i);
			sp.addNumbers(v.begin(), v.end());
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
}
