/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Addcontact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:27:30 by aaouassa          #+#    #+#             */
/*   Updated: 2023/08/09 21:16:11 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string    line( std::string type )
{
    std::string str;
    int on = 0;
    
    while (1)
    {
        getline(std::cin, str);
        int x = 0;
        if (type == "First name" || type == "Last name" || type == "Nick name" || type == "Darkest secret")
        {
            while (!isalpha(str[x++]))
            {
                std::cout << "you must enter only alphabetic , try again" << std::endl;
                std::cout << type << " : ";
                getline(std::cin, str);
                x = 0;
            }
        }
        int j = 0;
        if (type == "Phone Number")
        {
            while (!isdigit(str[j++]))
            {
                std::cout << "you must enter only digits, try again" << std::endl;
                std::cout << type << " : ";
                getline(std::cin, str);
                j = 0;
                
            }
        }
        while (str.empty())
        {
            std::cout << "A saved contact can't have empty fields, try again :" << std::endl;
            std::cout << type << " : ";
            getline(std::cin, str);
        }
        for ( int i = 0 ; str[i] ; i++ )
        {
            if (!std::isspace(str[i]))
            {
                on = 1;
                break;
            }
        }
        if ( on == 1 )
            return (str);
        else
        {
            std::cout << "Can't take only spaces, try again :" << std::endl;
            std::cout << type << " : ";
        }
    }
}

void    phonebook::add_contact(int i)
{
    std::cout << "First name : ";
    contacts[i].set_firstname(line("First name"));
    std::cout << "Last name  : ";
    contacts[i].set_lastname(line("Last name"));
    std::cout << "Nick name  : ";
    contacts[i].set_nickname(line("Nick name"));
    std::cout << "Phone number : ";
    contacts[i].set_phonenumber(line("Phone Number"));
    std::cout << "Darkest secret  : ";
    contacts[i].set_darkestsecret(line("Darkest secret"));
    
}