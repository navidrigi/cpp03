#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap's default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap's non-default constructor called" << std::endl;
	hitPoints_ = 100;
	energyPoints_ = 100;
	attackDamage_ = 30;
}

FragTrap::FragTrap(const FragTrap &other)
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
