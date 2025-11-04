/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:14:03 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/04 13:32:06 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal(), _type("cat")
{
    std::cout << "log - cat constructor" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(), _type(obj._type)
{
    std::cout << "log - cat copy constructor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "log - cat destructor" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
    _type = obj._type;
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