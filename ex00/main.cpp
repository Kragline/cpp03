#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	ct1;
	ClapTrap	ct2("Tony");

	ct2.takeDamage(5);
	ct2.attack("Villian number one");
	ct2.beRepaired(2);

	ct1 = ct2;
	ct1.attack("Villian number two");
	ct1.takeDamage(7);
	ct1.attack("Villian number three");

	return (0);
}
