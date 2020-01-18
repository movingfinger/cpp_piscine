#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

int		main()
{
	FragTrap frag;
	ScavTrap scav;
	NinjaTrap ninja;

	frag.meleeAttack("Troll");
	frag.rangedAttack("Dragon");
	frag.takeDamage(50);
	frag.beRepaired(20);
	frag.vaulthunter_dot_exe("zombie");
	frag.takeDamage(599);
	frag.beRepaired(200);

	scav.meleeAttack("Troll");
	scav.rangedAttack("Dragon");
	scav.takeDamage(50);
	scav.beRepaired(20);
	scav.challengeNewcomer();
	scav.takeDamage(599);
	scav.beRepaired(200);

	ninja.meleeAttack("Troll");
	ninja.rangedAttack("Dragon");
	ninja.takeDamage(30);
	ninja.beRepaired(10);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(ninja);
	ninja.takeDamage(1099);
	ninja.beRepaired(300);

	return (0);
}
