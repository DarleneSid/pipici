#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *newbornZombie = new Zombie(name);
    return newbornZombie;
}