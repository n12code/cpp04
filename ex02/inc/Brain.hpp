/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:01:23 by nbodin            #+#    #+#             */
/*   Updated: 2025/11/10 19:12:57 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    private:
        std::string _ideas[100];
        std::size_t _size;
    public:
        Brain();
        Brain(const Brain& obj);
        Brain& operator=(const Brain& obj);
        ~Brain();
        std::string         (&getIdeas())[100];
        const std::string   (&getIdeas() const)[100];
        void                setIdeas(const std::string& idea);
        Brain*              getBrain();
        void                printIdeas();
};

#endif