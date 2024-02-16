#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;

    public:
        Dog();
        Dog(const Dog &init);
        Dog& operator=(const Dog &init);

        void makeSound() const;
        ~Dog();
};

#endif