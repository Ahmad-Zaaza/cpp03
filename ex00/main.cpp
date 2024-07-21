#include "./ClapTrap.hpp"

int	main(void)
{
	{
		ClapTrap A("Alpha");

		A.takeDamage(9);
		A.attack("B");
		A.beRepaired(1);
		A.takeDamage(2);
		A.attack("B");
	}
	{
		ClapTrap B("Beta");

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
	}

	return (0);
}