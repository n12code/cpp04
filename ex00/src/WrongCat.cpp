/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:02:32 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/04 14:05:46 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"
#include "../inc/WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
    type = "wrongCat";
    std::cout << "log - wrongCat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal()
{
    WrongAnimal::operator=(obj);
    std::cout << "log - wrongCat copy constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "log - wrongCat destructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    if (this != &obj)
        WrongAnimal::operator=(obj);
    std::cout << "log - wrongCat copy assignement operator" << std::endl;
    return (*this);
}

std::string WrongCat::getType() const
{
    return (this->type);
}

void    WrongCat::makeSound() const
{
    std::cout << "wrong miaoooow" << std::endl;
}