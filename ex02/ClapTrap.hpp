#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		std::string 	_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_damage;

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &from);
		ClapTrap& operator=(ClapTrap &from);
		void	attack(const std::string &target);
		void	attack(ClapTrap &target);

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string		getName(void);

		void	rename(std::string newName);
		void	say(std::string message);
};

#endif