#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap's default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name_(name), hitPoints_(10), energyPoints_(10), attackDamage_(0)
{
	std::cout << "ClapTrap's constructor with 1 parameter called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) :
	name_(name), hitPoints_(hitPoints), energyPoints_(energyPoints), attackDamage_(attackDamage)
{
	std::cout << "ClapTrap's constructor with 4 parameters called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap's destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (hitPoints_ != 0 && energyPoints_ != 0)
	{
		std::cout << "ClapTrap "
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
		std::cout << "ClapTrap "
				  << name_
				  << " cannot attack anymore"
				  << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints_ == 0)
		std::cout << "ClapTrap "
				  << name_
				  << " is already dead"
				  << std::endl;
	else
	{
		hitPoints_ -= amount;
		if (hitPoints_ < 0)
			hitPoints_ = 0;
		std::cout << "ClapTrap "
				  << name_
				  << " takes "
				  << amount
				  << " damage, now he has "
				  << hitPoints_
				  << " hit points";
		if (hitPoints_ == 0)
			std::cout << " and is dead";
		std::cout << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints_ != 0 && energyPoints_ != 0)
	{
		hitPoints_ += amount;
		energyPoints_ -= 1;
		std::cout << "ClapTrap "
				  << name_
				  << " repaired himself "
				  << amount
				  << " points, now he has "
				  << hitPoints_
				  << " hit points"
				  << std::endl;
	}
	else
		std::cout << "ClapTrap "
				  << name_
				  << " cannot be healed" << std::endl;

	std::cout << "\033[31m"
			  << name_
			  << "'s remaining energyPoints: "
			  << energyPoints_
			  << std::endl
			  << "\033[0m";
}

std::string	ClapTrap::getName() const
{
	return name_;
}

int			ClapTrap::getHitPoints()
{
	return hitPoints_;
}
int			ClapTrap::getEnergyPoints()
{
	return energyPoints_;
}

int	ClapTrap::getAttackDamage()
{
	return attackDamage_;
}
