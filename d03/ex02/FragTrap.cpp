#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void)
{
	ClapTrap::setAttributes("FR4P-TP", 100, 100, 100, 100, 1, 30, 20, 5);
	std::cout <<"[" << this->name << "] FR4P-TP default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	ClapTrap::setAttributes(name, 100, 100, 100, 100, 1, 30, 20, 5);
	std::cout << "[" << this->name << "] FR4P-TP Parameter constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap &obj)
{
	*this = obj;
	std::cout << "[ " << this->name << "] FR4P-TP Copy constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &r)
{
	ClapTrap::operator=(r);
	std::cout << "[ " << this->name << "] FR4P-TP = operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "destructor called" << std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	srand(time(0));

	int		i = rand();
	int		j = 0;

	void (FragTrap::*ptr[])(std::string const &) =
	{
		&FragTrap::attackX2,
		&FragTrap::attackX3,
		&FragTrap::attackX4,
		&FragTrap::attackX5,
		&FragTrap::attackX6
	};

	if (this->_ep < 25)
	{
		std::cout << "Not enough energy... vaulthunter.exe failed" << std::endl;
		return ;
	}
	else
		this->_ep -= 25;
	std::cout << "FR4G-TP " << this->name << " used vaulthunter.exe! " << std::endl;
	i = (i % 5);
	while (j < 5)
	{
		if (j == i)
		{
			(this->*ptr[i])(target);
			j =  5;
		}
		++j;
	}
	return ;
}

void	FragTrap::attackX2(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " gave double damage! " << std::endl;
	std::cout << target << " got " << this->_matd * 2 << " damage!" << std::endl;
	return ;
}

void	FragTrap::attackX3(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " gave triple damage! " << std::endl;
	std::cout << target << " got " << this->_matd * 3 << " damage!" << std::endl;
	return ;
}

void	FragTrap::attackX4(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " gave qudraple damage! " << std::endl;
	std::cout << target << " got " << this->_matd * 4 << " damage!" << std::endl;
	return ;
}

void	FragTrap::attackX5(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " gave pentaple damage! " << std::endl;
	std::cout << target << " got " << this->_matd * 5 << " damage!" << std::endl;
	return ;
}

void	FragTrap::attackX6(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " gave triple - double damage! " << std::endl;
	std::cout << target << " got " << this->_matd * 6 << " damage!" << std::endl;
	return ;
}

