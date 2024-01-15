#include <iostream>

int main()
{
    std::string idk = "HI THIS IS BRAIN";
    std::string *stringPTR = &idk;
    std::string &stringREF = idk;

    std::cout << &idk << " | " << idk << std::endl;
    std::cout << stringPTR << " | " << *stringPTR << std::endl;
    std::cout << &stringREF << " | " << stringREF << std::endl;
    return 0;
}