/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:08:35 by haalouan          #+#    #+#             */
/*   Updated: 2024/08/12 12:46:19 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main() {
    PhoneBook phonebook;
    std::string result;

    system("clear");
    std::cout << "Weelcom to PhoneBook\n";
    while (1)
    {
        std::cout << "Enter ADD , SEARCH or EXIT : ";
        if (!std::getline(std::cin, result))
            exit(0);
        if (!result.compare("ADD")){
            phonebook.AddContact();
        }
        else if (!result.compare("SEARCH")){
            phonebook.SearchContact();
        }
        else if (!result.compare("EXIT")){
            std::cout << "Goodbye\n";
            break ;
        }
        else {
            std::cout << "Invalid command\n";
        }
    }

    return 0;
}