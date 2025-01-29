
#include "easyfind.hpp"
#include <vector>
#include <list>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
#define CLEAR "\033[2J\033[1;1H"

int main()
{
	std::cout << CLEAR;
	std::vector<int> numbers = {1, 2, 3, 4, 5};
	std::list<int> numbers2 = {1, 2, 3, 4, 5};
	std::vector<int> empty = {};

	try
	{
		std::cout << GREEN << "Testing Vector {1, 2, 3, 4, 5}" << RESET << std::endl;
		std::cout << CYAN << "Testing with 3" << RESET << std::endl;
		auto it = easyfind(numbers, 3);
		std::cout << "Found: " << *it << std::endl;

		std::cout << CYAN << "Testing with 10" << RESET << std::endl;
        auto it2 = easyfind(numbers, 10);
        std::cout << "Found: " << *it2 << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
    }
	try
	{
		std::cout << "-------------------------------" << std::endl;
		std::cout << GREEN << "Testing List {1, 2, 3, 4, 5}" << RESET << std::endl;
		std::cout << CYAN << "Testing with 3" << RESET << std::endl;
		auto it = easyfind(numbers2, 3);
		std::cout << "Found: " << *it << std::endl;

		std::cout << CYAN << "Testing with 10" << RESET << std::endl;
		auto it2 = easyfind(numbers2, 10);
		std::cout << "Found: " << *it2 << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
	}
	try
	{
		std::cout << "-------------------------------" << std::endl;
		std::cout << GREEN << "Testing Empty Vector {}" << RESET << std::endl;
		std::cout << CYAN << "Testing with 3" << RESET << std::endl;
		auto it = easyfind(empty, 3);
		std::cout << "Found: " << *it << std::endl;

		std::cout << CYAN << "Testing with 10" << RESET << std::endl;
		auto it2 = easyfind(empty, 10);
		std::cout << "Found: " << *it2 << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
	}
	return 0;
}
