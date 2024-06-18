#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap leClap("LeClap");
	ClapTrap newTrap;

	leClap.attack("enemy");
	for (int i = 0; i < 4; i++)
		leClap.takeDamage(2);
	leClap.beRepaired(10);
	leClap.takeDamage(1000);

	newTrap = leClap;
	newTrap.rename("newTrap");
	newTrap.attack("enemy");
	leClap.attack("enemy");
	leClap.beRepaired(199);
	leClap.takeDamage(1000);
	return 0;
}