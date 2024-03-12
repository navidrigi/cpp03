#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	player1("Asghar");
	FragTrap	player2("Akbar", 50, 40, 10);

	std::cout << std::endl;
	std::cout << player1.ClapTrap::getName() << std::endl;
	std::cout << player1.ClapTrap::getHitPoints() << std::endl;
	std::cout << player1.ClapTrap::getEnergyPoints() << std::endl;
	std::cout << player1.ClapTrap::getAttackDamage() << std::endl << std::endl;

	std::cout << player2.ClapTrap::getName() << std::endl;
	std::cout << player2.ClapTrap::getHitPoints() << std::endl;
	std::cout << player2.ClapTrap::getEnergyPoints() << std::endl;
	std::cout << player2.ClapTrap::getAttackDamage() << std::endl << std::endl;
	for (int i = 0; i < 4; i++)
	{
		player1.attack("Akbar");
		player2.takeDamage(player1.getAttackDamage());
		std::cout << std::endl;
	}

	for (int i = 0; i < 11; i++)
		player2.beRepaired(5);

	player1.highFivesGuys();

	return 0;
}
