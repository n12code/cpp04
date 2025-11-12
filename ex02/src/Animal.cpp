/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:14:01 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/12 19:39:16 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include <iostream>

AAnimal::AAnimal() : type("animal")
{
    std::cout << "log - animal constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal& obj) : type(obj.type)
{
    std::cout << "log - animal copy constructor" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "log - animal destructor" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& obj)
{
    if (this != &obj)
        type = obj.type;
    std::cout << "log - animal copy assignement operator" << std::endl;
    return (*this);
}

std::string AAnimal::getType() const
{
    return (this->type);
}

void    AAnimal::makeSound() const {}

void    AAnimal::setIdeas(const std::string& idea) {(void) idea;}

Brain*  AAnimal::getBrain() {return (NULL);}

void    AAnimal::printIdeas() {}
