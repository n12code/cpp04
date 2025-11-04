/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:13:32 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/04 13:34:42 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog : public Animal
{
    private:
        std::string _type;
    public:
        Dog();
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj);
        ~Dog();
        
        std::string getType() const;
        void makeSound() const;
};

#endif