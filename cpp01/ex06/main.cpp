#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    harl;

    if (ac != 2)
    {
        std::cout << "Wrong amount of arguments." << std::endl;
        return (EXIT_FAILURE);
    }
    std::string option = av[1];
    harl.complain(option);
    return EXIT_SUCCESS;
}