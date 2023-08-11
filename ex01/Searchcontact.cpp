/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Searchcontact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:27:45 by aaouassa          #+#    #+#             */
/*   Updated: 2023/08/09 21:36:32 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"
#include <iomanip>


void    phonebook::search_contact(int i)
{
    
    if (i != 0)
        std::cout << "|" << "  index   " << "|" << "first name" << "|" << " last name" << "|" << " nick name" << "|" << std::endl;
    for (int j = 0; j < i; j++)
    {
        std::cout << "|"  << std::setw(10) << j + 1 << "|";
        std::cout << std::setw(10) << contacts[j].get_firstname() << "|";
        std::cout << std::setw(10) << contacts[j].get_lastname() << "|";
        std::cout << std::setw(10) << contacts[j].get_nickname() << std::endl;
    }
    if (i == 0)
    {
        std::cout << "phonebook is empty" << std::endl;
        return ;
    }        
    else
        std::cout << "choose a index : ";
    std::string str;
    getline(std::cin, str);
    if (str.length() == 1)
    {
        const char *cstr = str.c_str();
        int x = atoi(cstr);
        if (x <= i && x != 0)
        {   
            std::cout << "First name : " << contacts[x - 1].get_firstname() << std::endl;
            std::cout << "Last name  : " << contacts[x - 1].get_lastname() << std::endl;
            std::cout << "Nickname   : " << contacts[x - 1].get_nickname() << std::endl;
            std::cout << "Phone number : " << contacts[x - 1].get_phonenumber() << std::endl;
            std::cout << "Darkest secret : " << contacts[x - 1].get_darkestsecret() << std::endl;
        }
    }
    else
        std::cout << "invalid index " << std::endl;
     
    
}

