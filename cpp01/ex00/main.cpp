#include "Zombie.hpp"

int main()
{
    Zombie *myfirstZombie = newZombie("Popo ");
    myfirstZombie->announce();
    randomChump("Pipi ");

    delete myfirstZombie;
}