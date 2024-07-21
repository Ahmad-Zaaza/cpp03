#include "ScavTrap.hpp"

int	main(void)
{
	{
		ScavTrap A("Alpha");

		A.takeDamage(9);
		A.attack("B");
		A.beRepaired(1);
		A.takeDamage(2);
		A.attack("B");
	}
	{
		ScavTrap B("Beta");

		B.takeDamage(9);
		B.attack("B");
		B.attack("B");
		B.attack("B");
		B.attack("B");
		B.attack("B");
		B.attack("B");
		B.beRepaired(1);
		B.beRepaired(1);
		B.beRepaired(1);
		B.beRepaired(1);
		B.beRepaired(1);
		B.takeDamage(2);
		B.attack("A");
		B.guardGate();
	}

	return (0);
}