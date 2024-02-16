#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &init);
        Animal& operator=(const Animal &init);
        std::string     getType() const;

        virtual void    makeSound() const;
        virtual ~Animal();
};

#endif