#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

std::string		Peon::getName(void) const
{
	return (this->_name);
}

std::ostream	&operator<<(std::ostream &o, Peon const &r)
{
	o << "I'm " << r.getName() << "and I like otters!" << std::endl;
	return (o);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
	return ;
}
