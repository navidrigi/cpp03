#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	player1("Asghar");
	DiamondTrap	player2("Akbar");

	std::cout << player1.getName() << std::endl;
	std::cout << player1.FragTrap::getHitPoints() << std::endl;
	std::cout << player1.getEnergyPoints() << std::endl;
	std::cout << player1.FragTrap::getAttackDamage() << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		player1.ScavTrap::attack("Akbar");
		player2.takeDamage(player1.getAttackDamage());
		std::cout << std::endl;
	}

	for (int i = 0; i < 11; i++)
		player2.beRepaired(5);
	player1.whoAmI();
	return 0;
}
