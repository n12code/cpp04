/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:13:38 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/17 08:46:01 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public AAnimal
{
    private:
        Brain*      _brain;
    public:
        Cat();
        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);
        ~Cat();
        
        std::string getType() const;
        void        makeSound() const;
        void        setIdeas(const std::string& idea);
        Brain*      getBrain();
        void        printIdeas();
};

#endif