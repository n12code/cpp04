/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:14:03 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/12 18:20:46 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Animal.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
    type = "cat";
    std::cout << "log - cat constructor" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal()
{
    Animal::operator=(obj);
    std::cout << "log - cat copy constructor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "log - cat destructor" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
        Animal::operator=(obj);
    std::cout << "log - cat copy assignement operator" << std::endl;
    return (*this);
}

std::string Cat::getType() const
{
    return (this->type);
}

void    Cat::makeSound() const
{
    std::cout << "miaoooow" << std::endl;
}