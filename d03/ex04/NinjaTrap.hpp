#ifndef NINJATRAP_H
#define NINJATRAP_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class	NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap &obj);
	NinjaTrap &operator=(NinjaTrap const &r);
	~NinjaTrap(void);

	void		ninjaShoebox(ClapTrap &obj);
	void		ninjaShoebox(FragTrap &obj);
	void		ninjaShoebox(ScavTrap &obj);
	void		ninjaShoebox(NinjaTrap &obj);
};
#endif
