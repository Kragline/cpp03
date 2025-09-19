#include "DiamondTrap.hpp"
#include <cstdlib>
#include <ctime>
#include <sstream>

int	main()
{
	srand(static_cast<unsigned>(time(0)));
	const int	N = 5;

	for (int i = 0; i < N; ++i)
	{
		std::stringstream	ss;
		ss << i;
		std::string idx = ss.str();
		int	type = rand() % 4;

		if (type == 0)
		{
			ClapTrap c("Clap_" + idx);
			c.attack("Target");
			c.takeDamage(i + 1);
			c.beRepaired(i);
		}
		else if (type == 1)
		{
			ScavTrap s("Scav_" + idx);
			s.attack("Target");
			s.takeDamage(i + 2);
			s.beRepaired(i + 1);
			s.guardGate();
		}
		else if (type == 2)
		{
			FragTrap f("Frag_" + idx);
			f.attack("Target");
			f.takeDamage(i + 3);
			f.beRepaired(i + 2);
			f.highFivesGuys();
		}
		else
		{
			DiamondTrap d("Diamond_" + idx);
			d.attack("Target");
			d.takeDamage(i + 4);
			d.beRepaired(i + 3);
			d.whoAmI();
		}
	}
	return (0);
}
