#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : name_(name), hitPoints_(10), energyPoints_(10), attackDamage_(0)
{
    std::cout << "Non-default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
        *this = other;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (hitPoints_ != 0 && energyPoints_ != 0)
    {
        std::cout << "ClapTrap "
                << name_
                << " attacks "
                << target
                << ", causing "
                << attackDamage_
                << " point(s) of damage"
                << std::endl;
        energyPoints_ -= 1;
        std::cout << name_
                << "'s Remaining energyPoints: "
                << energyPoints_
                << std::endl;
    }
    else
        std::cout << name_
                  << " cannot attack anymore"
                  << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints_ > 0)
    {
        hitPoints_ -= amount;
        std::cout << "ClapTrap "
                << name_
                << " takes "
                << amount
                << " damage, now he has "
                << hitPoints_
                << " hit points"
                << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints_ != 0 && energyPoints_ != 0)
    {
        hitPoints_ += amount;
        energyPoints_ -= 1;
        std::cout << "ClapTrap repaired himself "
                << amount
                << " point(s), now he has "
                << hitPoints_
                << " hit points"
                << std::endl;
    }
    else
        std::cout << "ClapTrap "
                  << name_
                  << " cannot be healed" << std::endl;

    std::cout << name_
              << "'s Remaining energyPoints: "
              << energyPoints_
              << std::endl;
}

std::string ClapTrap::getName()
{
    return name_;
}

// int         ClapTrap::getHitPoints()
// {
//     return hitPoints_;
// }

// int         ClapTrap::getEnergyPoints()
// {
//     return energyPoints_;
// }
