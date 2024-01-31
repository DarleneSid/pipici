#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

void Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::zombieName(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " destroyed x_x" << std::endl;
}
