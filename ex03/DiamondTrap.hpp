#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name_;
	public:
		DiamondTrap();
		DiamondTrap(std::string);
		DiamondTrap(const DiamondTrap &other);
        DiamondTrap    &operator=(const DiamondTrap &other);
		~DiamondTrap();
		void	whoAmI();
};
