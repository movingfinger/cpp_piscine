#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class	SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
public:
	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap &obj);
	SuperTrap &operator=(SuperTrap const &r);
	~SuperTrap(void);
};
#endif
