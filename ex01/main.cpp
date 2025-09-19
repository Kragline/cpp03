#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	st1;
	ScavTrap	st2("Tony");
	ScavTrap	st3("Mango");

	st2.takeDamage(50);
	st2.attack("Villian number one");
	st2.beRepaired(20);

	st1 = st2;
	st1.attack("Villian number two");
	st1.takeDamage(70);
	st1.attack("Villian number three");

	st1.guardGate();
	st3.guardGate();

	st2 = st3;
	st2.attack("Some random dude");

	return (0);
}
