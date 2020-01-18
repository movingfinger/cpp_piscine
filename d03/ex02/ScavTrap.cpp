#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void)
{
	ClapTrap::setAttributes("SC4V-TP", 100, 100, 10, 100, 1, 20, 15, 3);
	std::cout <<"[" << this->name << "] default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	ClapTrap::setAttributes(name, 100, 100, 100, 100, 1, 20, 15, 3);
	std::cout << "[" << this->name << "] Parameter constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap &obj)
{
	*this = obj;
	std::cout << "[ " << this->name << "] Copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &r)
{
	ClapTrap::operator=(r);
	std::cout << "[ " << this->name << "] = operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "destructor called" << std::endl;
}

void    ScavTrap::challengeNewcomer(void)
{
	srand(time(0));

	int		i = rand();

	if (i % 5 == 0)
		std::cout << this->name << " told 0!" << std::endl;
	else if (i % 5 == 1)
		std::cout << this->name << " told 1!" << std::endl;
	else if (i % 5 == 2)
		std::cout << this->name << " told 2!" << std::endl;
	else if (i % 5 == 3)
		std::cout << this->name << " told 3!" << std::endl;
	else
		std::cout << this->name << " told 4!" << std::endl;
	return ;
}
