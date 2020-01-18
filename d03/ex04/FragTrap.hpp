#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &obj);
		FragTrap &operator=(FragTrap const &r);
		~FragTrap(void);

		void		vaulthunter_dot_exe(std::string const & target);

		void		attackX2(std::string const & target);
		void		attackX3(std::string const & target);
		void		attackX4(std::string const & target);
		void		attackX5(std::string const & target);
		void		attackX6(std::string const & target);
};
#endif
