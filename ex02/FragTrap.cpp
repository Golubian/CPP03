#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "DefaultTrap";
	_health = 100;
	_energy = 100;
	_damage = 30;
	this->say("FragTrap Unit ready to FRAG!");
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_health = 100;
	_energy = 100;
	_damage = 30;
	this->say("FragTrap Unit ready to FRAG!");
}

FragTrap& FragTrap::operator=(FragTrap &from)
{
	if (this != &from)
	{
		this->_damage = from._damage;
		this->_health = from._health;
		this->_energy = from._energy;
		this->_name = from._name;
	}
	this->say("FragBro Unit duplicated, FragBro copy online and FRAGGING!");
	return *this;
}

void	FragTrap::attack(const std::string &target)
{
	if (_health == 0)
		say("Frag bro is too fragged to frag...");
	else if (_energy <= 0)
		say("FragBro is outta juice! Cant frag..");
	else
	{
		_energy--;
		say("Fragging " + target + "! [" + std::to_string(_damage) + " DMG]");
	}
}

void	FragTrap::attack(ClapTrap &target)
{
	if (_health == 0)
		say("Frag bro is too fragged to frag...");
	else if (_energy <= 0)
		say("FragBro is outta juice! Cant frag..");
	else
	{
		_energy--;
		say("Fragging " + target.getName() + "! [" + std::to_string(_damage) + " DMG]");
		target.takeDamage(_damage);
	}
}

FragTrap::~FragTrap()
{
	say("FragBro... is fragged... for good... [Destroyed]");
}

void	FragTrap::highFiveGuys(void)
{
	say("BROS... HIGH FIVE!!!");
}

void FragTrap::say(std::string message)
{
	std::cout << "[F|" << _name << "]: " << message << std::endl; 
}
