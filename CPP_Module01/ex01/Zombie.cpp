#include "Zombie.hpp"

Zombie::Zombie( std::string name)
{
    this->z_name = name;
}

Zombie::Zombie( void )
{
    std::cout << "<defalt>: : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void )
{
    std::cout << z_name << " is dead." << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << z_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::makeName( std::string name )
{
    this->z_name = name;
}
