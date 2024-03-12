#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	player1("ABC");
	DiamondTrap	player2("XYZ");

	PrintPlayer(player1);
	PrintPlayer(player2);

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
	{
		player1.ScavTrap::attack(player2.getName());
		player2.takeDamage(player1.getAttackDamage());
		std::cout << std::endl;
	}

	for (int i = 0; i < 11; i++)
		player2.beRepaired(5);

	player1.whoAmI();

	return 0;
}
