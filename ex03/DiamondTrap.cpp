#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	_name = ClapTrap::_name;
	ClapTrap::_name += "_clap_name";
	_hp = 100;
	_energy = 50;
	_damage = 30;
	std::cout << "Default DiamondTrap Gagas was created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	_name = name;
	_hp = 100;
	_energy = 50;
	_damage = 30;
	std::cout << "DiamondTrap " << _name << " was created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	std::cout << "Copy constructor for DiamondTrap " << _name << " called!" << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " was destroyed!" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	if (&other == this)
		return (*this);

	std::cout << "There is no more DiamondTrap " << _name;
	_name = other._name;
	ClapTrap::_name = _name + "_clap_name";
	_hp = other._hp;
	_energy = other._energy;
	_damage = other._damage;
	std::cout << ". Call him " << _name << " from now on!" << std::endl;
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's name is " << _name
		<< ". ClapTrap's name is " << ClapTrap::_name << std::endl;
}
