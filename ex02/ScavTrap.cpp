#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "DefaultTrap";
	_health = 100;
	_energy = 50;
	_damage = 20;
	this->say("ScavTrap Unit ready to scrap!");
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_health = 100;
	_energy = 50;
	_damage = 20;
	this->say("ScavTrap Unit ready to scrap!");
}

ScavTrap& ScavTrap::operator=(ScavTrap &from)
{
	if (this != &from)
	{
		this->_damage = from._damage;
		this->_health = from._health;
		this->_energy = from._energy;
		this->_name = from._name;
	}
	this->say("ScavTrap Unit duplicated, copy online and running!");
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_health == 0)
		say("Unit too dented to attack! Aborting.");
	else if (_energy <= 0)
		say("Energy levels too low to attack! Aborting.");
	else
	{
		_energy--;
		say("Opening fire on " + target + ". [" + std::to_string(_damage) + " DMG]");
	}
}

void	ScavTrap::attack(ClapTrap &target)
{
	if (_health == 0)
		say("Unit too dented to attack! Aborting.");
	else if (_energy <= 0)
		say("Energy levels too low to attack! Aborting.");
	else
	{
		_energy--;
		say("Opening fire on " + target.getName() + ". [" + std::to_string(_damage) + " DMG]");
		target.takeDamage(_damage);
	}
}

ScavTrap::~ScavTrap()
{
	say("ScavTrap... unit... disengaged.... [Destroyed]");
}

void ScavTrap::guardGate(void)
{
	say("ScavTrap unit entering G4TE K33P3R M0DE! STEP AWAY FROM THE GATE! I WILL SHOOT YOU! YOU'VE BEEN WARNED!!!");
}

void ScavTrap::say(std::string message)
{
	std::cout << "[S|" << _name << "]: " << message << std::endl; 
}
