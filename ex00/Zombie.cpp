#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->z_name = name;
}

Zombie::~Zombie()
{
	std::cout << z_name << " is dead." << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << z_name << ": BraiiiiiiinnnzzZZ..." << std::endl;
}
