#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    private:

    public:
        Cat();
        Cat(const Cat &init);
        Cat& operator=(const Cat &init);

        virtual void makeSound() const;
        virtual ~Cat();
};

#endif