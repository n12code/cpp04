/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:02:30 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/04 14:11:14 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("wrongAnimal")
{
    std::cout << "log - wrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) : type(obj.type)
{
    std::cout << "log - wrongAnimal copy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "log - wrongAnimal destructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    type = obj.type;
    std::cout << "log - wrongAnimal copy assignement operator" << std::endl;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "some wrongAnimal sound" << std::endl;
}