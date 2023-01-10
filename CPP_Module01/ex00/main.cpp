#include "Zombie.hpp"

void	check_leak(void)
{
	system("leaks zombie");
}

int	main()
{
	Zombie	*ted;
	Zombie	*julia;

	ted = newZombie("Ted");
	ted->announce();

	julia = newZombie("Julia");
	julia->announce();

	randomChump("Maria");
	randomChump("Timmie");

	delete	julia;
	delete	ted;

	return (0);
}
