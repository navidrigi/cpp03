#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap's default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap's non-default constructor called" << std::endl;
	name_ = name;
	ClapTrap::energyPoints_ = ScavTrap::energyPoints_;
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
	std::cout << std::endl
			  << "\033[32m"
			  << "---- I am "
			  << DiamondTrap::name_
			  << " in DiamondTrap class, and "
			  << ClapTrap::getName()
			  << " in ClapTrap class ----"
			  << "\033[0m"
			  << std::endl
			  << std::endl;
}

void	PrintPlayer(DiamondTrap &player)
{
	std::cout << std::endl;
	std::cout << player.getName() << std::endl;
	std::cout << player.getHitPoints() << std::endl;
	std::cout << player.getEnergyPoints() << std::endl;
	std::cout << player.getAttackDamage() << std::endl;
}
