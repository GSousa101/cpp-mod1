/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:23:08 by gusousa           #+#    #+#             */
/*   Updated: 2023/04/19 15:23:11 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
 private:
  std::string _first_name;
  std::string _last_name;
  std::string _nickname;
  std::string _phone_number;
  std::string _darkest_secret;

 public:
  std::string getFirstName();
  std::string getLastName();
  std::string getNickname();
  std::string getPhoneNumber();
  std::string getDarkestSecret();

  void setFirstName(std::string value);
  void setLastName(std::string value);
  void setNickname(std::string value);
  void setPhoneNumber(std::string value);
  void setDarkestSecret(std::string value);
};

#endif
