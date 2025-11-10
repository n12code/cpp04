/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:14:03 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/10 19:32:05 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Animal.hpp"
#include <iostream>

Cat::Cat() : Animal(), _type("cat"), _brain(new Brain())
{
    std::cout << "log - cat constructor" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj), _type(obj._type), _brain(new Brain(*obj._brain))
{
    std::cout << "log - cat copy constructor" << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "log - cat destructor" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
    _type = obj._type;
    _brain = obj._brain;
    std::cout << "log - cat copy assignement operator" << std::endl;
    return (*this);
}

std::string Cat::getType() const
{
    return (this->_type);
}

void    Cat::makeSound() const
{
    std::cout << "miaoooow" << std::endl;
}

void    Cat::setIdeas(const std::string& idea)
{
    _brain->setIdeas(idea);
}

Brain* Cat::getBrain()
{
    return (_brain->getBrain());
}

void    Cat::printIdeas()
{
    _brain->printIdeas();
}