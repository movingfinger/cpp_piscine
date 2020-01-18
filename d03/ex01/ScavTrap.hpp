#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class	ScavTrap
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
/*
	In all of these functions, you have to display sth to describe what happens.
	For example, the <rangedAttack> function may display sth along the lines of:

	FR4G-TP < name> attacks <target> at range, causing <damage> points of damage !

*/
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

/*
	It has challengeNewcomer function, which makes the 
	ScavTrap choose a challenge at random from a set of various
	(and hopefully funny) challenges you will have to invetn,
	and print it on the standard output.
*/

		void		challengeNewcomer(void);

	private:
/*
	* The number of hit points can never exceed the number of max hit points.
	Same for the energy points.
	If, for example, you repair too much HP, then you set them to the max HP number.
	In the same way, they can't fall below 0.

	* When you take damage, you have to take your armor damage reduction into account.
*/
		int				_hp;
		int				_maxHp;
		int				_ep;
		int				_maxEp;
		int				_lv;
		int				_matd;
		int				_ratd;
		int				_adr;
		std::string		_name;
};
#endif
