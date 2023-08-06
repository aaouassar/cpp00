/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:26:42 by aaouassa          #+#    #+#             */
/*   Updated: 2023/08/06 17:27:53 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

void    contact::set_firstname(std::string f)
{
    firstname = f;
}
void    contact::set_lastname(std::string l)
{
    lastname = l;
}
void contact::set_nickname(std::string n)
{
    nickname = n;
}
void contact::set_phonenumber(std::string p)
{
    phonenumber = p;
}
void contact::set_darkestsecret(std::string d)
{
    darkestsecret = d;
}

std::string contact::get_firstname()
{
    return firstname;
}
std::string contact::get_lastname()
{
    return lastname;
}
std::string contact::get_nickname()
{
    return nickname;
}
std::string contact::get_phonenumber()
{
    return phonenumber;
}
std::string contact::get_darkestsecret()
{
    return darkestsecret;
}

int main(int ac, char **av)
{
    phonebook phonebook;

    (void)av;
    if (ac != 1)
    {
        std::cout << "invalid argument" << std::endl;
        std::cout << " you should write ./phonebook" << std::endl;
        exit(1);
    }
    std::cout << "Enter a command : ADD - SEARCH - EXIT" << std::endl;
    while(1)
    {
        std::string command;
        getline(std::cin, command);
        if (std::cin.eof())
            break;
        if (command.empty())
            std::cout << "choose a cammand bettwen ADD OR SEARCH OR EXIT" <<std::endl;

        // if (command == "ADD")
        //     phonebook.add_contact();
        // if (command == "SEARCH")
        //     phonebook.search_contact(); 
    }
}