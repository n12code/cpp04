/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:01:13 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/05 19:30:15 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "log - brain constructor" << std::endl;
}

Brain::Brain(const Brain& obj)
{
    for (std::size_t i = 0; i < 100; i++)
        getIdeas()[i] = obj.getIdeas()[i];
    std::cout << "log - brain copy constructor" << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
    for (std::size_t i = 0 ; i < 100; i++)
        getIdeas()[i] = obj.getIdeas()[i];
    std::cout << "log - brain copy assignement operator" << std::endl;
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