#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->name = "kek no name";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " destroyed x_x" << std::endl;
}