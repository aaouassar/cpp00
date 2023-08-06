/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:38:44 by aaouassa          #+#    #+#             */
/*   Updated: 2023/08/06 17:00:07 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include"contact.hpp"

class phonebook
{
    private:
        contact contacts[8];
    
    public:
        void add_contact();
        void search_contact();  
};

#endif