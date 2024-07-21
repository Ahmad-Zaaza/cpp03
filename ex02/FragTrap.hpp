#ifndef FRAG_TRAP_H

# define FRAG_TRAP_H

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
  public:
	FragTrap(void);
	FragTrap(std::string const &_name);
	~FragTrap(void);

	void highFivesGuys();
};

#endif