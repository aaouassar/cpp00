/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:38:44 by aaouassa          #+#    #+#             */
/*   Updated: 2023/08/09 15:44:17 by aaouassa         ###   ########.fr       */
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
        void add_contact(int i);
        void search_contact(int i);  
};

#endif