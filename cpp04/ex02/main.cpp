#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\n______CONSTRUCTION_______\n" << std::endl;

    // const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\n___________WHO___________\n" << std::endl;


    std::cout << "Should be Dog: " << j->getType() << " " << std::endl;
    std::cout << "Should be Cat: " << i->getType() << " " << std::endl;

    std::cout << "\n__________SOUND__________\n" << std::endl;

    i->makeSound();
    j->makeSound();
    // meta->makeSound();

    std::cout << "\n_______DESTRUCTION_______\n" << std::endl;

    // delete  meta;
    delete  j;
    delete  i;

    std::cout << "\n___W__CONSTRUCTION_______\n" << std::endl;

    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << "\n________W__WHO___________\n" << std::endl;

    std::cout << "Should be WrongAnimal: " << wrongAnimal->getType() << " " << std::endl;
    std::cout << "Should be WrongCat: " << wrongCat->getType() << " " << std::endl;

    std::cout << "\n_______W__SOUND__________\n" << std::endl;

    wrongAnimal->makeSound();
    wrongCat->makeSound();

    std::cout << "\n____W__DESTRUCTION_______\n" << std::endl;

    delete  wrongAnimal;
    delete  wrongCat;

    return 0;
}