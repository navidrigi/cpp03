#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap's default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap's non-default constructor called" << std::endl;
	name_ = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	*this = other;
}

DiamondTrap    &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap's destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am "
			  << name_
			  << "in DiamondTrap class, and "
			  << ClapTrap::getName()
			  << " in ClapTrap class"
			  << std::endl;
}
