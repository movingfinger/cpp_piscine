#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	/*
	The constructor and destructor must also display sth, so people
	 can see they have been called properly. 
*/
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &obj);
		ScavTrap &operator=(ScavTrap const &r);
		~ScavTrap(void);

		void		challengeNewcomer(void);
};
#endif
