#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("CL4V-TP"), _hp(100), _maxHp(100), _ep(50), _maxEp(50), _lv(1), _matd(20), _ratd(15), _adr(3)
{
	std::cout <<"[" << this->name << "] CL4P-TP default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : name(name), _hp(100), _maxHp(100), _ep(100), _maxEp(100), _lv(1), _matd(30), _ratd(20), _adr(5)
{
	std::cout << "[" << this->name << "] CL4P-TP Parameter constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
	*this = obj;
	std::cout << "[ " << this->name << "] CL4P-TP Copy constructor called" << std::endl;
}

void	ClapTrap::setAttributes(std::string name, int hp, int maxHp, int ep, int maxEp, int lv, int matd, int ratd, int adr)
{
	this->name = name;
	this->_hp = hp;
	this->_maxHp = maxHp;
	this->_ep = ep;
	this->_maxEp = maxEp;
	this->_lv = lv;
	this->_matd = matd;
	this->_ratd = ratd;
	this->_adr = adr;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &r)
{
	this->name = r.name;
	this->_hp = r._hp;
	this->_maxHp = r._maxHp;
	this->_ep = r._ep;
	this->_maxEp = r._maxEp;
	this->_lv = r._lv;
	this->_matd = r._matd;
	this->_ratd = r._ratd;
	this->_adr = r._adr;
	std::cout << "[ " << this->name << "] = operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << " CL4P-TP destructor called" << std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "Claptrap " << this->name << " attacks " << target << " at range causing " << this->_ratd << " points of damage!" << std::endl;
	return ;
}

void    ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "Claptrap " << this->name << " attacks " << target << " at melee cauisng " << this->_matd << " points of damage!" << std::endl;
	return ;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	int	i = 0;
	if (amount > (unsigned int)(this->_maxHp + this->_adr))
		i = this->_maxHp + this->_adr;
	else
		i = amount;
	this->_hp = this->_hp - i + this->_adr;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << "Claptrap " << this->name << " got " << amount << " of damage, but armor deducted " << this->_adr << " point of damage. " << "[ " <<this->_hp << " / " << this->_maxHp << " ]" << std::endl;
	if (this->_hp == 0)
		std::cout << this->name << " died!" << std::endl;
	return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	int	repair = 0;
	if (this->_hp == 0)
	{
		std::cout << "[ " << this->name << " ] is already dead so healing is impossible!" << std::endl;
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
	std::cout << "Claptrap " << this->name << " healed " << repair << ". [ " << this->_hp << " / " << this->_maxHp << " ]" << std::endl;
	return ;

}