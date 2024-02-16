#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    private:

    public:
        Dog();
        Dog(const Dog &init);
        Dog& operator=(const Dog &init);

        virtual void makeSound() const;
        virtual ~Dog();
};

#endif