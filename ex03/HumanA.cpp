#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &club ) : name(name), weaponA(club)
{
//    this->name = name;
//    this->weaponA = club; 참조 변수는 생성과 동시에 초기화시켜야 하기 때문에 위에서 해줘야한다.
}

HumanA::~HumanA()
{
}

void    HumanA::attack( void )
{
    std::cout << name << " attacks with their " << weaponA.getType() << std::endl;
}
