/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:13:26 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/12 19:24:39 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal& obj);
        AAnimal& operator=(const AAnimal& obj);
        virtual ~AAnimal();
        
        virtual std::string getType() const;
        virtual void        makeSound() const = 0;
        virtual void        setIdeas(const std::string& idea) = 0;
        virtual Brain*      getBrain() = 0;
        virtual void        printIdeas() = 0;
};

#endif

