#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:

    public:
        WrongCat();
        WrongCat(const WrongCat &init);
        WrongCat& operator=(const WrongCat &init);

        virtual void makeSound() const;
        virtual ~WrongCat();
};

#endif