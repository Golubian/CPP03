#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(ClapTrap &from);
		FragTrap& operator=(FragTrap &from);

		void	attack(const std::string &target);
		void	attack(ClapTrap &target);
		void	highFiveGuys(void);
		void	say(std::string message);
};

#endif