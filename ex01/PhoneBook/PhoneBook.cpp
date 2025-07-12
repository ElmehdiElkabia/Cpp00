#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
}

void PhoneBook::add()
{
	int index = count % 8;
	contacts[index].fillContact(index);
	if (count < 8)
		count++;
}

std::string formatField(std::string &str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (std::string(10 - str.length(), ' ') + str);
}

void PhoneBook::search()
{
	std::string index;
	int i;

	if (count == 0)
	{
		std::cout << "PhoneBook is empty." << std::endl;
		return;
	}
	std::cout << "index | first name | last name | nickname " << std::endl;
	for (int i = 0; i < count && i < 8; ++i)
	{
		std::cout << i << " | "
				  << formatField(contacts[i].firstName) << " | "
				  << formatField(contacts[i].lastName) << " | "
				  << formatField(contacts[i].nickname) << std::endl;
	}
	std::cout << "Enter an index to view details:";
	if (!std::getline(std::cin, index))
	{
		std::cout << "\nExiting Search. Goodbye!" << std::endl;
		std::exit(0);
	}
	if (index.length() == 1 && std::isdigit(index[0]))
	{
		i = index[0] - '0';
		if (i >= 0 && i < count)
		{
			std::cout << "First Name: " << contacts[i].firstName << std::endl;
			std::cout << "Last Name: " << contacts[i].lastName << std::endl;
			std::cout << "Nickname: " << contacts[i].nickname << std::endl;
			std::cout << "Phone Number: " << contacts[i].phoneNumber << std::endl;
			std::cout << "Darkest Secret: " << contacts[i].darkestSecret << std::endl;
			return;
		}
	}
	else
		std::cout << "Invalid index!" << std::endl;
}