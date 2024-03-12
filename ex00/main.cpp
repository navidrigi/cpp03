#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	player1("Asghar");
	ClapTrap	player2("Akbar", 20, 10, 0);

	std::cout << std::endl;
	for (int i = 0; i < 11; i++)
	{
		player1.attack(player2.getName());
		player2.takeDamage(player1.getAttackDamage());
		std::cout << std::endl;
	}

	for (int i = 0; i < 11; i++)
		player2.beRepaired(3);
	
	std::cout << std::endl;

	return 0;
}
