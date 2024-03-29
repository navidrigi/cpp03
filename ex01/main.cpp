#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	player1("Asghar");
	ScavTrap	player2("Akbar", 200, 100, 30);

	PrintPlayer(player1);
	PrintPlayer(player2);

	std::cout << std::endl;

	for (int i = 0; i < 6; i++)
	{
		player1.attack("Akbar");
		player2.takeDamage(player1.getAttackDamage());
		std::cout << std::endl;
	}

	for (int i = 0; i < 11; i++)
		player2.beRepaired(5);

	player1.guardGate();

	return 0;
}
