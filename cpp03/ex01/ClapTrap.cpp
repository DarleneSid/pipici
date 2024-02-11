#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
_name(name),
_hitPoints(10),
_energyPoints(10),
_attackDamage(0)
{
    std::cout << "_________________________________\n" << std::endl;
    std::cout << "ClapTrap " << _name << " created." << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy! :(" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _attackDamage << " points of damage! :D" << std::endl;
    _energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " is dead! x_x" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " amount of damage! ^^" << std::endl;
    _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy and can't repair itself! :(" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " repairing itself and gain " << amount << " hitpoints! :*" << std::endl;
    _hitPoints += amount;
    _energyPoints -= 1;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called." << std::endl;
    std::cout << "_________________________________\n" << std::endl;
}
