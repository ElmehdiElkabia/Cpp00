#include "../PhoneBook/PhoneBook.hpp"

static int isOnlyDigits(std::string &str)
{
	int i;

	i = 0;
	if (str.empty())
		return 0;
	while (i < str.length())
	{
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int isOneString(std::string &str)
{
	int i;
	i = 0;
	if (str.empty())
		return (1);
	while (i < str.length())
	{
		if (std::isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

void Contact::fillContact(int index)
{
	while (isOneString(firstName))
	{
		std::cout << "\tEnter Fist Name :";
		if (!std::getline(std::cin, firstName))
		{
			std::cout << "\nExiting Contact. Goodbye!" << std::endl;
			std::exit(0);
		}
		if (isOneString(firstName))
			std::cout << "\t\t\tPlease enter a valid First Name!" << std::endl;
	}
	while (isOneString(lastName))
	{
		std::cout << "\tEnter Last Name :";
		if (!std::getline(std::cin, lastName))
		{
			std::cout << "\nExiting Contact. Goodbye!" << std::endl;
			std::exit(0);
		}
		if (isOneString(lastName))
			std::cout << "\t\tPlease enter a valid Last Name!" << std::endl;
	}
	while (isOneString(nickname))
	{
		std::cout << "\tEnter Nick Name :";
		if (!std::getline(std::cin, nickname))
		{
			std::cout << "\nExiting Contact. Goodbye!" << std::endl;
			std::exit(0);
		}
		if (isOneString(nickname))
			std::cout << "\t\tPlease enter a valid Nick Name!" << std::endl;
	}
	while (!isOnlyDigits(phoneNumber))
	{
		std::cout << "\tEnter Phone Number :";
		if (!std::getline(std::cin, phoneNumber))
		{
			std::cout << "\nExiting Contact. Goodbye!" << std::endl;
			std::exit(0);
		}
		if (!isOnlyDigits(phoneNumber))
			std::cout << "\t\tPlease enter a valid Phone Number!" << std::endl;
	}
	while (darkestSecret.empty())
	{
		std::cout << "\tEnter Darkest Secret :";
		if (!std::getline(std::cin, darkestSecret))
		{
			std::cout << "\nExiting Contact. Goodbye!" << std::endl;
			std::exit(0);
		}
		if (darkestSecret.empty())
			std::cout << "\t\tPlease enter a valid Darkest Secret!" << std::endl;
	}
}