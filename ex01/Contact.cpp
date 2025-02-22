/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:41:31 by haalouan          #+#    #+#             */
/*   Updated: 2024/08/12 10:57:53 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string firstName){
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName){
    this->lastName = lastName;
}

void Contact::setNickName(std::string nickName){
    this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber){
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret){
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const{
    return this->firstName;
}

std::string Contact::getLastName() const{
    return this->lastName;
}

std::string Contact::getNickName() const{
    return this->nickName;
}

std::string Contact::getPhoneNumber() const{
    return this->phoneNumber;
}

std::string Contact::getDarkestSecret() const{
    return this->darkestSecret;
}