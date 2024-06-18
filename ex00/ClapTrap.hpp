#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string 	_name;
		unsigned int	_health = 10;
		unsigned int	_energy = 10;
		unsigned int	_damage = 0;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &from);
		ClapTrap& operator=(ClapTrap &from);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	say(std::string message);
};

#endif