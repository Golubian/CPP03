#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ClapTrap &from);
		ScavTrap& operator=(ScavTrap &from);

		void	attack(const std::string &target);
		void	attack(ClapTrap &target);
		void	guardGate(void);
		void	say(std::string message);
};

#endif