#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &init)
{
 *this = init;
}

Brain& Brain::operator=(const Brain &init)
{
    std::cout << "Brain assignment operator called." << std::endl;
    if ( this != &init ) {
        for (int i = 0; i < 100; i++)
        {
            this->_ideas[i] = init._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain desstructor called" << std::endl;
}