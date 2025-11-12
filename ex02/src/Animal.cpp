/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:14:01 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/12 18:51:23 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include <iostream>

Animal::Animal() : type("animal")
{
    std::cout << "log - animal constructor" << std::endl;
}

Animal::Animal(const Animal& obj) : type(obj.type)
{
    std::cout << "log - animal copy constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "log - animal destructor" << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
        type = obj.type;
    std::cout << "log - animal copy assignement operator" << std::endl;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void    Animal::makeSound() const
{
    std::cout << "some animal sound" << std::endl;
}

void    Animal::setIdeas(const std::string& idea)
{
    (void) idea;
    std::cout << "I'm a simple animal, I don't have a brain, I can't store any ideas!" << std::endl;
}

Brain*  Animal::getBrain()
{
    std::cout << "I'm a simple animal, I don't have a brain!" << std::endl;
    return (NULL);
}

void    Animal::printIdeas()
{
    std::cout << "I'm a simple animal, I don't have a brain, I can't store any ideas!" << std::endl;
}
