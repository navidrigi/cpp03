#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap's default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap's constructor with 1 parameter called" << std::endl;
}

ScavTrap::ScavTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) : ClapTrap(name, hitPoints, energyPoints, attackDamage)
{
	std::cout << "ScavTrap's constructor with 4 parameter called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap's destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
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
	std::cout << std::endl
			  << "\033[36m---- ScavTrap is in gate keeper mode now ----\033[0m"
			  << std::endl
			  << std::endl;
}

void	PrintPlayer(ScavTrap &player)
{
	std::cout << std::endl;
	std::cout << player.getName() << std::endl;
	std::cout << player.getHitPoints() << std::endl;
	std::cout << player.getEnergyPoints() << std::endl;
	std::cout << player.getAttackDamage() << std::endl;
}
