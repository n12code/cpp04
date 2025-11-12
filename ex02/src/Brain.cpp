/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:01:13 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/12 19:02:16 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"
#include <iostream>

Brain::Brain() : _size(0)
{
    std::cout << "log - brain constructor" << std::endl;
}

Brain::Brain(const Brain& obj) : _size(obj._size)
{
    for (std::size_t i = 0; i < 100; i++)
        getIdeas()[i] = obj.getIdeas()[i];
    std::cout << "log - brain copy constructor" << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
    if (this != &obj)
    {
        _size = obj._size;
        for (std::size_t i = 0 ; i < 100; i++)
            getIdeas()[i] = obj.getIdeas()[i];
    }
    std::cout << "log - brain copy assignement operator" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "log - brain destructor" << std::endl;
}

std::string (&Brain::getIdeas())[100]
{
    return _ideas;
}


const std::string (&Brain::getIdeas() const)[100]
{
    return _ideas;
}

void    Brain::setIdeas(const std::string& idea)
{
    if (_size < 100)
    {
        _ideas[_size] = idea;
        _size++;
        std::cout << "Added an idea!" << std::endl;
    }
    else
        std::cout << "I cant remember any more ideas! My brain is full!" << std::endl;
}

Brain* Brain::getBrain()
{
    return (this);
}

void    Brain::printIdeas()
{
    std::string (&ideas)[100] = getIdeas();
    for (std::size_t i = 0; i < 100; i++)
    {
        if (!ideas[i].empty())
            std::cout << ideas[i] << std::endl;
    }
}
