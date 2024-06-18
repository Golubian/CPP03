#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap leClap("CrapClap");
	std::cout << std::endl;

	ScavTrap leScav("Scav");
	std::cout << std::endl;

	ScavTrap leScav2;
	leScav2 = leScav;
	std::cout << std::endl;

	leClap.attack(leScav);
	std::cout << std::endl;
	leScav.guardGate();
	std::cout << std::endl;
	leScav.attack(leClap);
	std::cout << std::endl;
	leScav.say("Want some more???");
	std::cout << std::endl;
	leScav.attack(leClap);
	std::cout << std::endl;
	leScav.attack(leClap);
	std::cout << std::endl;
	leScav.attack(leClap);
	std::cout << std::endl;

	return 0;
}