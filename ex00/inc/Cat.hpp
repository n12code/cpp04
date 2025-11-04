/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:13:38 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/04 13:33:55 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
    private:
        std::string _type;
    public:
        Cat();
        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);
        ~Cat();
        
        std::string getType() const;
        void makeSound() const;
};

#endif