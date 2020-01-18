#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _hp(100), _maxHp(100), _ep(100), _maxEp(100), _lv(1), _matd(30), _ratd(20), _adr(5), _name("FR4G-TP") 
{
	std::cout <<"[" << this->_name << "] default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : _hp(100), _maxHp(100), _ep(100), _maxEp(100), _lv(1), _matd(30), _ratd(20), _adr(5), _name("FR4G-TP") 
{
	std::cout << "[" << this->_name << "] Parameter constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap &obj)
{
	*this = obj;
	std::cout << "[ " << this->_name << "] Copy constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &r)
{
	this->_hp = r._hp;
	this->_maxHp = r._maxHp;
	this->_ep = r._ep;
	this->_maxEp = r._maxEp;
	this->_lv = r._lv;
	this->_matd = r._matd;
	this->_ratd = r._ratd;
	this->_adr = r._adr;
	this->_name = r._name;
	std::cout << "[ " << this->_name << "] = operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "destructor called" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range causing " << this->_ratd << " points of damage!" << std::endl;
	return ;
}

void    FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee cauisng " << this->_matd << " points of damage!" << std::endl;
	return ;
}

void    FragTrap::takeDamage(unsigned int amount)
{
	int	i = 0;
	if (amount > (unsigned int)(this->_maxHp + this->_adr))
		i = this->_maxHp + this->_adr;
	else
		i = amount;
	this->_hp = this->_hp - i + this->_adr;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << "FR4G-TP " << this->_name << " got " << amount << " of damage, but armor deducted " << this->_adr << " point of damage. " << "[ " <<this->_hp << " / " << this->_maxHp << " ]" << std::endl;
	if (this->_hp == 0)
		std::cout << this->_name << " died!" << std::endl;
	return ;
}

void    FragTrap::beRepaired(unsigned int amount)
{
	int	repair = 0;
	if (this->_hp == 0)
	{
		std::cout << "[ " << this->_name << " ] is already dead so healing is impossible!" << std::endl;
		return ;
	}
	if (amount >= (unsigned int)this->_maxHp)
		amount = (unsigned int)this->_maxHp;
	if (this->_hp + amount > (unsigned int)this->_maxHp)
	{
		repair = this->_hp + amount - this->_maxHp - amount;
		if (repair < 0)
			repair *= -1;
	}
	else
		repair = amount;
	this->_hp += amount;
	if (this->_hp > this->_maxHp)
		this->_hp = this->_maxHp;
	std::cout << "FR4G-TP " << this->_name << " healed " << repair << ". [ " << this->_hp << " / " << this->_maxHp << " ]" << std::endl;
	return ;

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
	std::cout << "FR4G-TP " << this->_name << " used vaulthunter.exe! " << std::endl;
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
	std::cout << "FR4G-TP " << this->_name << " gave double damage! " << std::endl;
	std::cout << target << " got " << this->_matd * 2 << " damage!" << std::endl;
	return ;
}

void	FragTrap::attackX3(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " gave triple damage! " << std::endl;
	std::cout << target << " got " << this->_matd * 3 << " damage!" << std::endl;
	return ;
}

void	FragTrap::attackX4(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " gave qudraple damage! " << std::endl;
	std::cout << target << " got " << this->_matd * 4 << " damage!" << std::endl;
	return ;
}

void	FragTrap::attackX5(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " gave pentaple damage! " << std::endl;
	std::cout << target << " got " << this->_matd * 5 << " damage!" << std::endl;
	return ;
}

void	FragTrap::attackX6(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " gave triple - double damage! " << std::endl;
	std::cout << target << " got " << this->_matd * 6 << " damage!" << std::endl;
	return ;
}

