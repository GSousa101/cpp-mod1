/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:29:17 by gusousa           #+#    #+#             */
/*   Updated: 2023/04/19 16:04:09 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"


Contact::Contact(const std::string& name, const std::string& phoneNumber)
    : name_(name), phoneNumber_(phoneNumber) {}

Contact::~Contact() {}

void Contact::setFirstName(std::string value) {
  this->_first_name = value;
}

void Contact::setLastName(std::string value) {
  this->_last_name = value;
}

void Contact::setNickname(std::string value) {
  this->_nickname = value;
}

void Contact::setPhoneNumber(std::string value) {
  this->_phone_number = value;
}

void Contact::setDarkestSecret(std::string value) {
  this->_darkest_secret = value;
}

std::string Contact::getFirstName() {
  return this->_first_name;
}

std::string Contact::getLastName() {
  return this->_last_name;
}

std::string Contact::getNickname() {
  return this->_nickname;
}

std::string Contact::getPhoneNumber() {
  return this->_phone_number;
}

std::string Contact::getDarkestSecret() {
  return this->_darkest_secret;
}
