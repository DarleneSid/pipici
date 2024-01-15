#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
   std::string name;
public:
    Zombie(void);
    void    announce(void);
    void    zombieName(std::string name);
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif