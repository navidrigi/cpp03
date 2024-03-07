#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap's default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap's non-default constructor called" << std::endl;
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDamage_ = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap's destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
	if (hitPoints_ != 0 && energyPoints_ != 0)
	{
		std::cout << "ScavTrap "
				  << name_
				  << " attacks "
				  << target
				  << ", causing "
				  << attackDamage_
				  << " points of damage"
				  << std::endl;
		energyPoints_ -= 1;
		std::cout << "\033[31m"
				  << name_
				  << "'s remaining energyPoints: "
				  << energyPoints_
				  << std::endl
				  << "\033[0m";
	}
	else
		std::cout << "ScavTrap "
				  << name_
				  << " cannot attack anymore"
				  << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "\033[36mScavTrap is in gate keeper mode now\033[0m" << std::endl;
}
