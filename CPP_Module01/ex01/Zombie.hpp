#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cctype>
#include <string>

class Zombie
{
private:
    std::string z_name;
public:
    Zombie( std::string name );
    Zombie( void );
    ~Zombie( void );

    void    announce( void );
    void    makeName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif