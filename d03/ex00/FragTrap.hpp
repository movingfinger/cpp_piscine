#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class	FragTrap
{
	/*
	The constructor and destructor must also display sth, so people
	 can see they have been called properly. 
*/
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &obj);
		FragTrap &operator=(FragTrap const &r);
		~FragTrap(void);
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
	This function will effect a semi-random attack on the target.
	Make it so each time it is called, it chooses a (preferably) 
	funny attack chosen at random from a pool of at least 5 possible attacks.
	Whatever you want to use to accomplish this is fine, but as usual,
	the more elegant your method, the better.
	This functions costs 25 energy points to run.
	If you don't have enough energy points, it will do nothing
	else than print sth indicating it's out of energy.
*/

		void		vaulthunter_dot_exe(std::string const & target);

		void		attackX2(std::string const & target);
		void		attackX3(std::string const & target);
		void		attackX4(std::string const & target);
		void		attackX5(std::string const & target);
		void		attackX6(std::string const & target);
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
