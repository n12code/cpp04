/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:14:06 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/04 13:34:57 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal(), _type("dog")
{
    std::cout << "log - dog constructor" << std::endl;
}

Dog::Dog(const Dog& obj) :  Animal(), _type(obj._type)
{
    std::cout << "log - dog copy constructor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "log - dog destructor" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
    _type = obj._type;
    std::cout << "log - dog copy assignement operator" << std::endl;
    return (*this);
}

std::string Dog::getType() const
{
    return (this->_type);
}

void    Dog::makeSound() const
{
    std::cout << "woufwouf" << std::endl;
}