/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:09:43 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/18 19:26:23 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#define N 8

std::string d(std::string s)
{
  if (s.length() > 10)
    return (s.substr(0, 9) + ".");
  else
    return (s);
}

void tablePrint(std::string s, bool endl = false)
{
  std::cout << std::setw(9) << d(s) << " | ";
  if (endl)
    std::cout << std::endl;
}

class Contact
{
private:
  std::string firstName;
  std::string lastName;
  std::string nickName;
  std::string phoneNumber;
  std::string darkestSecret;

public:
  Contact()
  {
    firstName = "";
    lastName = "";
    nickName = "";
    phoneNumber = "";
    darkestSecret = "";
  }

  Contact(std::string fname, std::string lname, std::string nname, std::string phnum, std::string secret)
  {
    firstName = fname;
    lastName = lname;
    nickName = nname;
    phoneNumber = phnum;
    darkestSecret = secret;
  }
  void setFirstName(std::string fname)
  {
    firstName = fname;
  }
  void setLastName(std::string lname)
  {
    lastName = lname;
  }
  void setNickName(std::string nname)
  {
    nickName = nname;
  }
  void setPhoneNumber(std::string phnum)
  {
    phoneNumber = phnum;
  }
  void setDarkestSecret(std::string secret)
  {
    darkestSecret = secret;
  }
  void display(void)
  {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nick Name: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
  }
  void displayTable(int index)
  {
    std::cout << std::setw(10) << index << " | ";
    tablePrint(firstName);
    tablePrint(lastName);
    tablePrint(nickName, true);
  }
};

class PhoneBook
{
private:
  int i;
  Contact contacts[N];

public:
  PhoneBook()
  {
    i = 0;
  }
  void addContact(const Contact &c)
  {
    if (i >= N)
      contacts[N - 1] = c;
    else
      contacts[i++] = c;
    std::cout << "Contact added successfully" << std::endl;
  };

  void displayContact(int index)
  {
    if (index > -1 && index < i)
      contacts[index].display();
    else
      std::cout << "Invalid index" << std::endl;
  }

  void display(void)
  {
    tablePrint("Index");
    tablePrint("First Name");
    tablePrint("Last Name");
    tablePrint("Nick Name", true);
    for (int j = 0; j < i; j++)
      contacts[j].displayTable(j);
  }
};

void _read(std::string hint, void (Contact::*setter)(std::string), Contact &c)
{
  std::string inp;
  std::cout << hint << ": ";
  std::getline(std::cin, inp);
  if (inp.empty())
  {
    std::cout << "Input can't be empty" << std::endl;
    _read(hint, setter, c);
  }
  else
    (c.*setter)(inp);
}

int main(void)
{
  std::cout << "Welcome to the phonebook" << std::endl;
  std::cout << "Commands: ADD, SEARCH, EXIT" << std::endl;
  std::string command;
  PhoneBook pb;
  while (std::getline(std::cin, command))
  {
    if (command == "ADD")
    {
      Contact c;
      _read("First Name", &Contact::setFirstName, c);
      _read("Last Name", &Contact::setLastName, c);
      _read("Nick Name", &Contact::setNickName, c);
      _read("Phone Number", &Contact::setPhoneNumber, c);
      _read("Darkest Secret", &Contact::setDarkestSecret, c);
      pb.addContact(c);
    }
    else if (command == "SEARCH")
    {
      int index;
      pb.display();
      std::cout << "Enter the index of the contact you want to display: ";
      std::cin >> index;
      if (std::cin.fail())
      {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Index must be integer" << std::endl;
        continue;
      }
      else
      {
        pb.displayContact(index);
      }
      std::cin.clear();
      std::cin.ignore(10000, '\n');
    }
    else if (command == "EXIT")
      return (0);
    else
      std::cout << "Invalid command" << std::endl;
  }
}
