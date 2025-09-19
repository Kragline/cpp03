#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hp = 100;
	_energy = 100;
	_damage = 30;
	std::cout << "Default FragTrap Gagas was created!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 100;
	_damage = 30;
	std::cout << "FragTrap " << _name << " was created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "Copy constructor for FragTrap " << _name << " called!" << std::endl;
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " was destroyed!" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (&other == this)
		return (*this);

	std::cout << "There is no more FragTrap " << _name;
	_name = other._name;
	_hp = other._hp;
	_energy = other._energy;
	_damage = other._damage;
	std::cout << ". Call him " << _name << " from now on!" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys() const
{
	std::cout << "Fragtrap " << _name << " wants to give everyone a high five!" << std::endl;
}
