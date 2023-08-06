/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:36:52 by aaouassa          #+#    #+#             */
/*   Updated: 2023/08/02 17:21:25 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac == 1)
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while(av[i])
    {
        j = 0;
        while (av[i][j])
        {
            std :: cout << (char)toupper(av[i][j]);
            j++;
        }
        i++;
    }
}