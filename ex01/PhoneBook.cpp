/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:24:28 by haalouan          #+#    #+#             */
/*   Updated: 2024/08/14 19:58:01 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    this->contactCount = 0;
    this->contactIndex = 0;
    this->maxContact = 8;
}

int isAlpha(std::string ch){
    int i = 0;

    while (ch[i]){
        if (ch[i] > '9' || ch[i] < '0')
            return 1;
        i++;
    }
    return 0;
}

void PhoneBook::AddContact() {
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    if (this->contactIndex == maxContact)
        this->contactIndex = 0;
    system("clear");
    std::cout << "Enter your firstName : ";
    if (!std::getline(std::cin, firstName))
        exit(0);
    if (firstName.empty()){
        std::cout << "invalid First name\n";
        return ;
    }
    system("clear");
    std::cout << "Enter your lastName : ";
    if (!std::getline(std::cin, lastName))
        exit(0);
    if(lastName.empty()){
        std::cout << "invalid Last name\n";
        return ;
    }
    system("clear");
    std::cout << "Enter your nickName : ";
    if(!std::getline(std::cin, nickName))
        exit(0);
    if(nickName.empty()){
        std::cout << "invalid Nick name\n";
        return ;
    }
    system("clear");
    std::cout << "Enter your phone nmber : ";
    if (!std::getline(std::cin, phoneNumber))
        exit(0);
    if(phoneNumber.empty()){
        std::cout << "invalid Phone number\n";
        return ;
    }
    system("clear");
    std::cout << "Enter your darkest secret : ";
    if (!std::getline(std::cin, darkestSecret))
        exit(0);
    if(darkestSecret.empty()){
        std::cout << "invalid Darkest secret\n";
        return ;
    }
    system("clear");

    this->contact[this->contactIndex].setFirstName(firstName);
    this->contact[this->contactIndex].setLastName(lastName);
    this->contact[this->contactIndex].setNickName(nickName);
    this->contact[this->contactIndex].setPhoneNumber(phoneNumber);
    this->contact[this->contactIndex].setDarkestSecret(darkestSecret);
    this->contactIndex++;
    if (contactCount < 8)
        contactCount++;
}


void PhoneBook::SearchContact(){

    std::cout << std::setw(10) << std::right << "Index" << " | ";
    std::cout << std::setw(10) << std::right << "First Name" << " | ";
    std::cout << std::setw(10) << std::right << "Last Name" << " | ";
    std::cout << std::setw(10) << std::right << "nickName" << std::endl;
    std::cout << std::string(54, '-') << std::endl;

    for (int i = 0; i < contactCount; ++i) {
        std::string firstName = contact[i].getFirstName();
        std::string lastName = contact[i].getLastName();
        std::string nickName = contact[i].getNickName();

        if (firstName.length() > 10) firstName = firstName.substr(0, 9) + ".";
        if (lastName.length() > 10) lastName = lastName.substr(0, 9) + ".";
        if (nickName.length() > 10) nickName = nickName.substr(0, 9) + ".";

        std::cout << std::setw(10) << i << " | ";
        std::cout << std::setw(10) << firstName  << " | ";
        std::cout << std::setw(10) << lastName  << " | ";
        std::cout << std::setw(10) << nickName  << std::endl;
    }
    
    std::cout << "Enter the index of the contact to display : ";
    std::string result;
    if (!std::getline(std::cin, result))
        exit(0);
    if (result.empty()){
        std::cout << "invalid index\n";
        return ;
    }
    if (isAlpha(result)){
        std::cout << "invalid index\n";
        return ;
    }
    int index = atoi(result.c_str());
    if (index < 0 || index >= 8){
        std::cout << "Out of range\n";
        return ;
    }
    if (index >= this->contactCount){
        std::cout << "The contact is empty\n";
        return ;
    }
    std::cout << "Fist Name : " << contact[index].getFirstName() << std::endl;
    std::cout << "Last Name : " << contact[index].getLastName() << std::endl;
    std::cout << "nickName : " << contact[index].getNickName() << std::endl;
    std::cout << "Phone Number : " << contact[index].getPhoneNumber() << std::endl;
    std::cout << "Darket Secret : " << contact[index].getDarkestSecret() << std::endl;
    
}