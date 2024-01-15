#include "Zombie.hpp"

#define N 3

int main()
{
    Zombie *mySquad = zombieHorde(N, "Popo ");
    int i = 0;
    
    while (i < N)
    {
        mySquad[i].announce();
        i++;
    }
    delete[] mySquad;
    return 0;
}