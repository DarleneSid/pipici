#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap scav("Pipi");
    scav.attack("Popo");
    scav.guardGate();
    scav.takeDamage(30);
    scav.beRepaired(50);
    scav.attack("Pepe");
    scav.takeDamage(80);
    scav.beRepaired(60);
    scav.attack("Papa");
    scav.beRepaired(100);

    return EXIT_SUCCESS;
}