/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:27:13 by aaouassa          #+#    #+#             */
/*   Updated: 2023/08/06 10:50:56 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<iostream>
#include<string>


class contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
        
    public:
        void set_firstname(std::string f);
        void set_lastname(std::string l);
        void set_nickname(std::string n);
        void set_phonenumber(std::string p);
        void set_darkestsecret(std::string d);
        
        std::string get_firstname();
        std::string get_lastname();
        std::string get_nickname();
        std::string get_phonenumber();
        std::string get_darkestsecret();
};

#endif