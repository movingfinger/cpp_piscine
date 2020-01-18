#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap(), FragTrap(), NinjaTrap()
{
	ClapTrap::setAttributes("SP4P-TP", 100, 100, 100, 100, 1, 30, 20, 5);
	std::cout <<"[" << this->name << "] SP4P-TP default constructor called" << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	ClapTrap::setAttributes(name, 100, 100, 100, 100, 1, 30, 20, 5);
	std::cout << "[" << this->name << "] SP4P-TP Parameter constructor called" << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap &obj) : ClapTrap(obj), FragTrap(obj), NinjaTrap(obj)
{
	*this = obj;
	std::cout << "[ " << this->name << "] SP4P-TP Copy constructor called" << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &r)
{
	ClapTrap::operator=(r);
	std::cout << "[ " << this->name << "] SP4P-TP = operator called" << std::endl;
	return (*this);
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "destructor called" << std::endl;
}