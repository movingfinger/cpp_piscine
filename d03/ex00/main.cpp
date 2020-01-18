#include "FragTrap.hpp"

int		main()
{
	FragTrap temp;

	temp.meleeAttack("Troll");
	temp.rangedAttack("Dragon");
	temp.takeDamage(50);
	temp.beRepaired(20);
	temp.takeDamage(599);
	temp.beRepaired(200);

	return (0);
}
