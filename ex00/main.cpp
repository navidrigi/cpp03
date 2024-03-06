#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	player1("Asghar");
	ClapTrap	player2("Akbar");

	player1.attack(player2.getName()); // 1
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName());
	player1.attack(player2.getName()); // 11

	player2.takeDamage(4);
	player2.takeDamage(1);
	player2.takeDamage(2);
	player2.takeDamage(1);
	player2.beRepaired(3); // 1
	player2.beRepaired(3);
	player2.beRepaired(3);
	player2.beRepaired(3);
	player2.beRepaired(3);
	player2.beRepaired(3);
	player2.beRepaired(3);
	player2.beRepaired(3);
	player2.beRepaired(3);
	player2.beRepaired(3);
	player2.beRepaired(3); // 11

	return 0;
}
