#include "filesMess.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Amount of arguments is wrong." << std::endl;
        return EXIT_FAILURE;
    }
    else
    {
        FilesMess FilesMess(av[1]);
        FilesMess.replace(av[2], av[3]);
    }
    return EXIT_SUCCESS;
}