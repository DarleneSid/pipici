#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;

    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &init);
        WrongAnimal& operator=(const WrongAnimal &init);
        std::string     getType() const;

        virtual void    makeSound() const;
        virtual ~WrongAnimal();
};

#endif