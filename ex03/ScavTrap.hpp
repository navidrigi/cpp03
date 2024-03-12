#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		int		energyPoints_;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
		ScavTrap(const ScavTrap &other);
		ScavTrap	&operator=(const ScavTrap &other);
		~ScavTrap();
		void	attack(const std::string &target);
		void	guardGate();
};
