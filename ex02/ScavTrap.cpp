#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap's default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap's non-default constructor called" << std::endl;
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

void	ScavTrap::guardGate()
{
	std::cout << "\033[36mScavTrap is in gate keeper mode now\033[0m" << std::endl;
}
