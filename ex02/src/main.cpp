/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:13:44 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/12 19:04:26 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include <iostream>

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

    std::cout << std::endl;

    original->setIdeas("idea1");
    original->setIdeas("idea2");
    
    std::cout << std::endl;

    Animal* deepCopy = new Dog(*dynamic_cast<Dog*>(original));

    std::cout << std::endl;

    deepCopy->setIdeas("idea3");
    
    std::cout << std::endl;

    std::cout << "original ideas :" << std::endl;
    original->printIdeas();
    
    std::cout << std::endl;
    
    std::cout << "deepcopy ideas :" << std::endl;
    deepCopy->printIdeas();

    std::cout << std::endl;

    std::cout << deepCopy->getType() << std::endl;
    std::cout << original->getType() << std::endl;

    std::cout << std::endl;

    delete  original;
    delete  deepCopy;
        
    return 0;
}