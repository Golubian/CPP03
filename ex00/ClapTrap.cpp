#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("DefaultTrap")
{}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->say("ClapTrap Unit online and running!");
}

ClapTrap::ClapTrap(ClapTrap &from)
{
	*this = from; 
	this->say("ClapTrap Unit duplicated, copy online and running!");
}

void ClapTrap::say(std::string message)
{
	std::cout << "[" << _name << "]: " << message << std::endl; 
}

void	attack(const std::string &target);
void	takeDamage(unsigned int amount);
void	beRepaired(unsigned int amount);


ClapTrap& ClapTrap::operator=(ClapTrap &from)
{
	if (this != &from)
	{
		this->_damage = from._damage;
		this->_health = from._health;
		this->_energy = from._energy;
		this->_name = from._name;
	}
	return *this;
}