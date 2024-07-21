#ifndef CLAP_TRAP_H

# define CLAP_TRAP_H

# include <iostream>

class ClapTrap
{
  protected:
	std::string _name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_damage;

  public:
	ClapTrap(void);
	ClapTrap(std::string const &_name);
	ClapTrap(ClapTrap const &);
	~ClapTrap(void);

	ClapTrap &operator=(ClapTrap const &);

	std::string getName() const;
	unsigned int getHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;

	void setName(std::string const);
	void setHitPoints(unsigned int);
	void setEnergyPoints(unsigned int);
	void setAttackDamage(unsigned int);

	virtual void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif