#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap's default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap's constructor with 1 parameter called" << std::endl;
}

FragTrap::FragTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) : ClapTrap(name, hitPoints, energyPoints, attackDamage)
{
	std::cout << "FragTrap's constructor with 4 parameters called" << std::endl << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
}

FragTrap    &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap's destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout <<std::endl
			  << "\033[35m---- Positive high Fives ----\033[0m" 
			  << std::endl
			  << std::endl;
}

void	PrintPlayer(FragTrap &player)
{
	std::cout << player.getName() << std::endl;
	std::cout << player.getHitPoints() << std::endl;
	std::cout << player.getEnergyPoints() << std::endl;
	std::cout << player.getAttackDamage() << std::endl << std::endl;
}
