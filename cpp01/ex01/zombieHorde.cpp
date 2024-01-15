#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
    Zombie *mySquad = new Zombie[N];
    int i = 0;
    while(i < N)
    {
        mySquad[i].zombieName(name);
        i++;
    }
    return mySquad;
}