#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	player1("Asghar");
	ClapTrap	player2("Akbar");

	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player2.takeDamage(4);

	player2.beRepaired(3);

	return 0;
}
