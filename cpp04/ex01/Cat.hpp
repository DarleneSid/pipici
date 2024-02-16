#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;

    public:
        Cat();
        Cat(const Cat &init);
        Cat& operator=(const Cat &init);

        void makeSound() const;
        ~Cat();
};

#endif