#include "./ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : _name(_name), _hit_points(100),
	_energy_points(50), _attack_damage(20)
{
	std::cout << "ClapTrap parametatized constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &original)
{
	if (this != &original)
	{
		this->_name = original.getName();
		this->_energy_points = original.getEnergyPoints();
		this->_hit_points = original.getHitPoints();
		this->_attack_damage = original.getAttackDamage();
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

void ClapTrap::setHitPoints(unsigned int const amount)
{
	this->_hit_points = amount;
}
void ClapTrap::setEnergyPoints(unsigned int const amt)
{
	this->_energy_points = amt;
}
void ClapTrap::setAttackDamage(unsigned int const amt)
{
	this->_attack_damage = amt;
}

void ClapTrap::setName(std::string const name)
{
	this->_name = name;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->getHitPoints() == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " have no hitpoints left" << std::endl;
		return ;
	}
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " have no energy points left" << std::endl;
		return ;
	}
	setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " have no hitpoints left" << std::endl;
		return ;
	}
	if (amount > this->getHitPoints())
		setHitPoints(0);
	else
		setHitPoints(this->getHitPoints() - amount);
	std::cout << "ClapTrap " << this->getName() << " took " << amount << " of damage and now have " << this->getHitPoints() << " of hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoints() == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " have no hitpoints left" << std::endl;
		return ;
	}
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " have no energy points left" << std::endl;
		return ;
	}
	setEnergyPoints(this->getEnergyPoints() - 1);
	setHitPoints(this->getHitPoints() + amount);
	std::cout << "ClapTrap " << getName() << " got repaired by " << amount << " of hit points and now have " << this->getHitPoints() << " hit points" << std::endl;
}
