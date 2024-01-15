#include "Harl.hpp"

int main()
{
    std::string input;
    Harl        harl;

    do
    {
        std::cout << "Enter an option: ";
        std::cin >> input;
        harl.complain(input);
    } while (input.compare("exit"));
    return EXIT_SUCCESS;
}