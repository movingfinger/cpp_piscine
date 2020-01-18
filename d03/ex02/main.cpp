#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main()
{
	FragTrap frag;
	ScavTrap scav;

	frag.meleeAttack("Troll");
	frag.rangedAttack("Dragon");
	frag.takeDamage(50);
	frag.beRepaired(20);
	frag.takeDamage(599);
	frag.beRepaired(200);

	frag.vaulthunter_dot_exe("zombie");
	
	scav.meleeAttack("Troll");
	scav.rangedAttack("Dragon");
	scav.takeDamage(50);
	scav.beRepaired(20);
	scav.takeDamage(599);
	scav.beRepaired(200);

	scav.challengeNewcomer();

	return (0);
}
