#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap clap("Pipi");
    clap.attack("Popo");
    clap.takeDamage(3);
    clap.beRepaired(5);
    clap.attack("Pepe");
    clap.takeDamage(2);
    clap.beRepaired(20);
    clap.attack("Papa");
    clap.beRepaired(10);
    clap.attack("Pupu");
    clap.takeDamage(1);
    clap.beRepaired(20);
    clap.attack("Piupiu");
    clap.takeDamage(1);
    clap.beRepaired(20);
    clap.attack("Paupau");

    return EXIT_SUCCESS;
}