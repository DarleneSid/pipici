#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    FragTrap frag("Pipi");
    FragTrap fragg("Popo");

    frag.attack("Pope");
    fragg.highFivesGuys();
    frag.takeDamage(30);
    frag.beRepaired(10);
    fragg.attack("Pepe");
    frag.highFivesGuys();
    fragg.takeDamage(80);
    fragg.attack("Papa");
    fragg.beRepaired(100);

    return EXIT_SUCCESS;
}