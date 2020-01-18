#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

std::string	Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string	Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void	Sorcerer::polymorph(Victim const &str) const
{
	str.getPolymorphed();
	return ;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &r)
{
	o << "I am " << r.getName() << ", " << r.getTitle() << ", and I like ponies !" << std::endl;
	return (o);
}
