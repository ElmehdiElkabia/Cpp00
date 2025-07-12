#include "PhoneBook/PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
		{
			std::cout << "\nExiting PhoneBook. Goodbye!" << std::endl;
			break;
		}
		if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else if (command == "EXIT")
		{
			std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
			break;
		}
		else
			std::cout << "Invalid command." << std::endl;
	}
	return (0);
}