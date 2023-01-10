#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <vector>

class	Zombie
{
public:
	Zombie( std::string name );
	~Zombie( void );

	void	announce( void );
private:
	std::string	z_name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
