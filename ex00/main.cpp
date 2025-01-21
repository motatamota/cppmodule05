#include "Bureaucrat.h"

int	main()
{
	try
	{
		std::cout << "tset:1" << std::endl;
		Bureaucrat tester("taiga", 0);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}

	try
	{
		std::cout << "tset:2" << std::endl;
		Bureaucrat tester("taiga", 151);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}

	try
	{
		std::cout << "tset:3" << std::endl;
		Bureaucrat tester("taiga", 1);
		std::cout << "constractor called" << std::endl;
		tester.upGrade();
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}

	try
	{
		std::cout << "tset:4" << std::endl;
		Bureaucrat tester("taiga", 150);
		std::cout << "constractor called" << std::endl;
		tester.downGrade();
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}

	Bureaucrat tester("taiga", 1);
	std::cout << tester << std::endl;
	// Bureaucrat tester2("taiga", 0);
	// std::cout << tester << std::endl;
	// Bureaucrat tester3("taiga", 151);
	// std::cout << tester << std::endl;
}
