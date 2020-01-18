#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _hp(100), _maxHp(100), _ep(50), _maxEp(50), _lv(1), _matd(20), _ratd(15), _adr(3), _name("SC4V-TP") 
{
	std::cout <<"[" << this->_name << "] default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : _hp(100), _maxHp(100), _ep(100), _maxEp(100), _lv(1), _matd(30), _ratd(20), _adr(5), _name("SC4V-TP") 
{
	std::cout << "[" << this->_name << "] Parameter constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap &obj)
{
	*this = obj;
	std::cout << "[ " << this->_name << "] Copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &r)
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

ScavTrap::~ScavTrap(void)
{
	std::cout << "destructor called" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "Claptrap " << this->_name << " attacks " << target << " at range causing " << this->_ratd << " points of damage!" << std::endl;
	return ;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Claptrap " << this->_name << " attacks " << target << " at melee cauisng " << this->_matd << " points of damage!" << std::endl;
	return ;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
	int	i = 0;
	if (amount > (unsigned int)(this->_maxHp + this->_adr))
		i = this->_maxHp + this->_adr;
	else
		i = amount;
	this->_hp = this->_hp - i + this->_adr;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << "Claptrap " << this->_name << " got " << amount << " of damage, but armor deducted " << this->_adr << " point of damage. " << "[ " <<this->_hp << " / " << this->_maxHp << " ]" << std::endl;
	if (this->_hp == 0)
		std::cout << this->_name << " died!" << std::endl;
	return ;
}

void    ScavTrap::beRepaired(unsigned int amount)
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
	std::cout << "Claptrap " << this->_name << " healed " << repair << ". [ " << this->_hp << " / " << this->_maxHp << " ]" << std::endl;
	return ;

}

void    ScavTrap::challengeNewcomer(void)
{
	srand(time(0));

	int		i = rand();

	if (i % 5 == 0)
		std::cout << this->_name << " told 0!" << std::endl;
	else if (i % 5 == 1)
		std::cout << this->_name << " told 1!" << std::endl;
	else if (i % 5 == 2)
		std::cout << this->_name << " told 2!" << std::endl;
	else if (i % 5 == 3)
		std::cout << this->_name << " told 3!" << std::endl;
	else
		std::cout << this->_name << " told 4!" << std::endl;
	return ;
}
