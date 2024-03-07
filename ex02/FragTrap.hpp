#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
	public:
		FragTrap();
		FragTrap(std::string);
		FragTrap(const FragTrap &other);
        FragTrap    &operator=(const FragTrap &other);
		~FragTrap();
		void	highFivesGuys(void);
};
