#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	ClapTrap::setAttributes("NNJ4P-TP", 100, 100, 100, 100, 1, 30, 20, 5);
	std::cout <<"[" << this->name << "] NNJ4P-TP default constructor called" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name)
{
	ClapTrap::setAttributes(name, 100, 100, 100, 100, 1, 30, 20, 5);
	std::cout << "[" << this->name << "] NNJ4P-TP Parameter constructor called" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap &obj)
{
	*this = obj;
	std::cout << "[ " << this->name << "] NNJ4P-TP Copy constructor called" << std::endl;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &r)
{
	ClapTrap::operator=(r);
	std::cout << "[ " << this->name << "] NNJ4P-TP = operator called" << std::endl;
	return (*this);
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "destructor called" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &obj)
{
	std::cout << "Hey " << obj.name << "ClagTrap will die!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &obj)
{
	std::cout << "Hey " << obj.name << "FragTrap will die!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &obj)
{
	std::cout << "Hey " << obj.name << "ScavTrap will die!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &obj)
{
	std::cout << "Hey " << obj.name << "NinjaTrap will die!" << std::endl;
}