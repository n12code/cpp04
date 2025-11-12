/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:13:44 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/12 19:38:13 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include <iostream>

int main()
{
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();
    std::cout << std::endl << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    dog->makeSound();

    std::cout << std::endl;

    delete  dog;
    delete  cat;

    std::cout << std::endl;
    
    AAnimal*  animalArr[10];
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
        
    AAnimal* original = new Dog();

    std::cout << std::endl;

    original->setIdeas("idea1");
    original->setIdeas("idea2");
    
    std::cout << std::endl;

    AAnimal* deepCopy = new Dog(*dynamic_cast<Dog*>(original));

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