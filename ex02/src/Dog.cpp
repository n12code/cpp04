/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:14:06 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/17 08:55:29 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/AAnimal.hpp"
#include <iostream>

Dog::Dog() : AAnimal(), _brain(new Brain())
{
    type = "dog";
    std::cout << "log - dog constructor" << std::endl;
}

Dog::Dog(const Dog& obj) :  AAnimal(obj), _brain(new Brain(*obj._brain))
{
    std::cout << "log - dog copy constructor" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "log - dog destructor" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
    {
        AAnimal::operator=(obj);
        delete _brain;
        _brain = new Brain(*obj._brain);
    }
    std::cout << "log - dog copy assignement operator" << std::endl;
    return (*this);
}

std::string Dog::getType() const
{
    return (this->type);
}

void    Dog::makeSound() const
{
    std::cout << "woufwouf" << std::endl;
}

void    Dog::setIdeas(const std::string& idea)
{
    _brain->setIdeas(idea);
}

Brain* Dog::getBrain()
{
    return (_brain->getBrain());
}

void    Dog::printIdeas()
{
    _brain->printIdeas();
}