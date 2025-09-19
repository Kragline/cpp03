#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Gagas"), _hp(10), _energy(10), _damage(0)
{
	std::cout << "Default ClapTrap Gagas was created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap " << _name << " was created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor for ClapTrap " << _name << " called!" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " was destroyed!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (&other == this)
		return (*this);

	std::cout << "There is no more ClapTrap " << _name;
	_name = other._name;
	_hp = other._hp;
	_energy = other._energy;
	_damage = other._damage;
	std::cout << ". Call him " << _name << " from now on!" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
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
	std::cout << _name << " attacks " << target << ", causing "
		<< _damage << " points of damage!" << std::endl;
	--_energy;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " took "
		<< amount << " points of damage!" << std::endl;
	if (amount >= _hp)
		_hp = 0;
	else
		_hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hp)
	{
		std::cout << _name << " has no hit points to repair himself!" << std::endl;
		return ;
	}
	if (!_energy)
	{
		std::cout << _name << " has no hit energy to repair himself!" << std::endl;
		return ;
	}
	--_energy;
	_hp += amount;
	std::cout << _name << " repaired himself by "
		<< amount << " points. Now he has " << _hp << " hit points!" << std::endl;
}
