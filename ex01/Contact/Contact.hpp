#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <cctype>
class Contact
{
public:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
	void		fillContact(int index);
};

#endif