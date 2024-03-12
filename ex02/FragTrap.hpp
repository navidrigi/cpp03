#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
		FragTrap(const FragTrap &other);
        FragTrap    &operator=(const FragTrap &other);
		~FragTrap();
		void	highFivesGuys(void);
};

void	PrintPlayer(FragTrap &player);
