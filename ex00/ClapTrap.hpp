#pragma once

#include <iostream>

class ClapTrap
{
    private:
        std::string name_;
        int         hitPoints_;
        int         energyPoints_;
        int         attackDamage_;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap    &operator=(const ClapTrap &other);
        ~ClapTrap();
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        std::string getName();
        // int         getHitPoints();
        // int         getEnergyPoints();
};