#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap Scav("Scav");
	std::cout << std::endl;

	FragTrap Frag("FRAGBRO1");
	std::cout << std::endl;
	
	FragTrap Frag2;
	Frag2 = Frag;
	Frag2.rename("FRAGBRO2");
	std::cout << std::endl;

	Frag.highFiveGuys();
	Frag2.highFiveGuys();
	std::cout << std::endl;

	Frag.attack(Scav);
	std::cout << std::endl;
	Frag2.attack(Scav);
	std::cout << std::endl;
	Frag.attack(Scav);
	std::cout << std::endl;
	Frag.attack(Scav);
	std::cout << std::endl;
	Scav.attack(Frag);



	return 0;
}