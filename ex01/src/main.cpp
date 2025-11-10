/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:13:44 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/10 19:34:30 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include <iostream>

// check leaks inn ex00
// finish the tests
// segfault cause its not a deepcopy

int main()
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << std::endl << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    dog->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    delete  meta;
    delete  dog;
    delete  cat;
    
    std::cout << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    std::cout << std::endl << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound();
    wrongMeta->makeSound();
    
    std::cout << std::endl;

    delete wrongMeta;
    delete wrongCat;
    
    std::cout << std::endl;
    
    Animal*  animalArr[10];
    for (std::size_t i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            animalArr[i] = new Cat();
        else
            animalArr[i] = new Dog();
    }

    std::cout << std::endl;
    
    for (std::size_t i = 0; i < 10; i++)
        delete animalArr[i];
    
    std::cout << std::endl;
        
    Animal* original = new Dog();
    original->setIdeas("idea1");
    original->setIdeas("idea2");
    
    std::cout << std::endl;

    Animal* deepCopy = original;
    deepCopy->setIdeas("idea3");
    
    original->printIdeas();
    
    std::cout << std::endl;
    
    deepCopy->printIdeas();

    delete  original;
    delete  deepCopy;
        
    return 0;
}