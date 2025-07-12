#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "../Contact/Contact.hpp"

class	PhoneBook{
	public:
		Contact contacts[8];
		int count;
		PhoneBook();
		void	add();
		void	search();
};

#endif