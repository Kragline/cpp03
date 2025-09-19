#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hp = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "Default ScavTrap Gagas was created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "ScavTrap " << _name << " was created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "Copy constructor for ScavTrap " << _name << " called!" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " was destroyed!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (&other == this)
		return (*this);

	std::cout << "There is no more ScavTrap " << _name;
	_name = other._name;
	_hp = other._hp;
	_energy = other._energy;
	_damage = other._damage;
	std::cout << ". Call him " << _name << " from now on!" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (!_hp)
	{
		std::cout << _name << " has no hit points to attack!" << std::endl;
		return ;
	}
	if (!_energy)
	{
		std::cout << _name << " has no hit energy to attack!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
		<< _damage << " points of damage!" << std::endl;
	--_energy;
}

void	ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << _name << " is now in guard mode!" << std::endl;
}
