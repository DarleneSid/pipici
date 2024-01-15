#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie newbornZombie(name);
    newbornZombie.announce();
}
