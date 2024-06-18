#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("DefaultTrap"), _damage(0), _energy(10), _health(10)
{
	this->say("ClapTrap Unit online and running!");
}

ClapTrap::ClapTrap(std::string name) : _name(name), _damage(0), _energy(10), _health(10)
{
	this->say("ClapTrap Unit online and running!");
}

ClapTrap::ClapTrap(ClapTrap &from)
{
	*this = from;
}

ClapTrap& ClapTrap::operator=(ClapTrap &from)
{
	if (this != &from)
	{
		this->_damage = from._damage;
		this->_health = from._health;
		this->_energy = from._energy;
		this->_name = from._name;
	}
	this->say("ClapTrap Unit duplicated, copy online and running!");
	return *this;
}

ClapTrap::~ClapTrap()
{
	say("ClapTrap... unit... disabled.... [Destroyed]");
}

void ClapTrap::say(std::string message)
{
	std::cout << "[C|" << _name << "]: " << message << std::endl; 
}

void	ClapTrap::attack(const std::string &target)
{
	if (_health == 0)
		say("ClapTrap unit under severe damage! Can't attack!!! HELP HELP HELP HELP!!!");
	else if (_energy <= 0)
		say("Can't attack! Insufficient energy!");
	else
	{
		_energy--;
		say("Take that, " + target + "! [-" + std::to_string(_damage) + " HP]");
	}
}

void	ClapTrap::attack(ClapTrap &target)
{
	if (_health == 0)
		say("ClapTrap unit under severe damage! Can't attack!!! HELP HELP HELP HELP!!!");
	else if (_energy <= 0)
		say("Can't attack! Insufficient energy!");
	else
	{
		_energy--;
		say("Take that, " + target.getName() + "! [" + std::to_string(_damage) + " DMG]");
		target.takeDamage(_damage);
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
		if (amount > 0 && _health > 0)
			say("Yeeoooouch!!! My bones!! [-" + std::to_string(amount) + " HP]");
		else if (_health > 0)
			say("That barely left a scratch! [NO DAMAGE]");
		
		if (_health > 0)
		{
			if (amount > _health)
				_health = 0;
			else
				_health -= amount;
				if (_health == 0)
			say("ClapTrap unit under severe damage! SOS!!!! MAYDAY!!!");
		}
		else
			say("I'm already DEAD!!! STOP SHOOTING!!!");
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_health == 0)
		say("ClapTrap unit under severe damage! Can't repair!!! MAYDAY MAYDAY!!!");
	else if (_energy <= 0)
		say("Can't repair myself! Insufficient energy!");
	else
	{
		_energy--;
		say("Ahhhh... much better! [+" + std::to_string(amount) + " HP]");
	}
}

void	ClapTrap::rename(std::string newName)
{
	say("ClapTrap unit renamed! NEW_NAME: " + newName);
	_name = newName;
}

std::string	ClapTrap::getName()
{
	return _name;
}

