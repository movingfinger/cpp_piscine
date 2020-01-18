#include "Sorcerer.hpp"
#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return ;
}

std::string	Victim::getName(void) const
{
	return (this->_name);
}

std::ostream &operator<<(std::ostream &o, Victim const &r)
{
	o << "I'm " << r.getName() << " and I like otters !" << std::endl;
	return (o);
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
	return ;
}
