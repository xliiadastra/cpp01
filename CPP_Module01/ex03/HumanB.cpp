#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
    this->name = name;
    this->weaponB = nullptr;
}

HumanB::~HumanB()
{
}

void    HumanB::attack( void )
{
    if (weaponB != nullptr)
        std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}

void    HumanB::setWeapon( Weapon &club )
{
    this->weaponB = &club;
}
