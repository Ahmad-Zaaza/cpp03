#ifndef SCAV_TRAP_H

# define SCAV_TRAP_H

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
  public:
	ScavTrap(void);
	ScavTrap(std::string _name);
	~ScavTrap(void);

	void attack(const std::string &target);
	void guardGate();
};

#endif