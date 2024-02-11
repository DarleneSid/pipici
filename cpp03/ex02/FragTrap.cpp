#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this-> _energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " created." << std::endl;
    std::cout << "_________________________________\n" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "FragTrap " << this->_name << " has no energy! :(" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! :D" << std::endl;
    this->_energyPoints -= 1;
}
void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " giving a high fives." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "_________________________________\n" << std::endl;
    std::cout << "FragTrap destructor called." << std::endl;
}