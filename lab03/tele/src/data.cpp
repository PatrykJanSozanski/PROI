//
//  data.cpp
//  lab03
//
//  PROI: PROJECT NO3 (LAB03)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 05/05/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#include "data.h"

//dodawanie użytkownika
void TData::addNewUser()
{
    std::string name;
    std::string surname;
    int number;

    std::cout << "adding the new user" << std::endl;

    std::cout << "#name: ";
    std::cin >> name;

    std::cout << "#surname: ";
    std::cin >> surname;

    std::cout << "#number: ";
    std::cin >> number;
    std::cout << std::endl;

    Users.push_back(TUser(name, surname, number, adress));
}

//dodawanie użytkownika
void TData::addNewUserWithBalance()
{
    std::string name;
    std::string surname;
    int number;
    double balance;

    std::cout << "adding the new user" << std::endl;

    std::cout << "#name: ";
    std::cin >> name;

    std::cout << "#surname: ";
    std::cin >> surname;

    std::cout << "#number: ";
    std::cin >> number;

    std::cout << "#balance: ";
    std::cin >> balance;
    std::cout << std::endl;

    Users.push_back(TUser(name, surname, number, adress, balance));
}

//usuwanie użytkownika
void TData::removeUser()
{
    std::string name;
    std::string surname;
    int number;

    std::cout << "removing the user" << std::endl;

    std::cout << "#name: ";
    std::cin >> name;

    std::cout << "#surname: ";
    std::cin >> surname;

    std::cout << "#number: ";
    std::cin >> number;
    std::cout << std::endl;

    if(exists(name, surname, number))
    {
        Users.erase(TData::findUser(name, surname, number));
    }
}

//zwracanie liczby użytkowników
int TData::numberOfUsers()
{
   return Users.size();
}

//wyświetlanie liczby użytkowników
void TData::showNumberOfUsers()
{
    std::cout << "the number of users: " << Users.size() << std::endl;
    std::cout << std::endl;
}

//wyświetlanie użytkownika
void TData::showUserByName()
{

    std::string name;
    std::string surname;

    std::cout << "searching user" << std::endl;

    std::cout << "#name: ";
    std::cin >> name;

    std::cout << "#surname: ";
    std::cin >> surname;
    std::cout << std::endl;

    if(exists(name, surname))
    {
       findUser(name, surname) -> show();
    }
}

//wyświetlanie użytkownika
void TData::showUserByNumber()
{

    int number;

    std::cout << "searching user" << std::endl;

    std::cout << "#number: ";
    std::cin >> number;
    std::cout << std::endl;

    if(exists(number))
    {
        findUser(number) -> show();
    }
}

//wysyłanie wiadomości tekstowej
void TData::sendMessage()
{
    std::string name;
    std::string surname;
    int number;

    std::cout << "insert your personal details" << std::endl;

    std::cout << "#name: ";
    std::cin >> name;

    std::cout << "#surname: ";
    std::cin >> surname;

    std::cout << "#number: ";
    std::cin >> number;
    std::cout << std::endl;

    if(exists(name, surname, number))
    {
        findUser(name, surname, number) -> sendNewMessage();
    }
}

//pobieranie i zapisywanie adresu bazy
void TData::setAdress(TData* a)
{
    adress = a;
}

//zwracanie adresu
TData* TData::giveAdress()
{
    return adress;
}

//sprawdzanie, czy użytkownik istnieje
bool TData::exists(std::string na, std::string su, int nu)
{
    TUser Temp(na, su, nu, adress);

    for (std::vector<TUser>::iterator U = Users.begin(); U != Users.end(); U++) {
        if (*U == Temp)
        {
            return true;
        }
    }

    std::cout << "there is not such a user" << std::endl;
    std::cout << std::endl;
    return false;
}

//sprawdzanie, czy użytkownik istnieje
bool TData::exists(std::string na, std::string su)
{
    for (std::vector<TUser>::iterator U = Users.begin(); U != Users.end(); U++) {
        if (U -> getName() == na && U -> getSurname() == su)
        {
            return true;
        }
    }

    std::cout << "there is not such a user" << std::endl;
    std::cout << std::endl;
    return false;
}

//sprawdzanie, czy użytkownik istnieje
bool TData::exists(int nu)
{
    for (std::vector<TUser>::iterator U = Users.begin(); U != Users.end(); U++) {
        if (U -> getNumber() == nu)
        {
            return true;
        }
    }

    std::cout << "there is not such a user" << std::endl;
    std::cout << std::endl;
    return false;
}

//wyszukiwanie użytkownika o zadanym atrybucie
std::vector<TUser>::iterator TData::findUser(std::string na, std::string su, int nu)
{
    TUser Temp(na, su, nu, adress);

    for(std::vector<TUser>::iterator U = Users.begin(); U != Users.end(); U++)
    {
        if(*U == Temp)
        {
            return U;
        }
    }
    exit(-1);
}

//wyszukiwanie użytkownika o zadanym atrybucie
std::vector<TUser>::iterator TData::findUser(std::string na, std::string su)
{
    for(std::vector<TUser>::iterator U = Users.begin(); U != Users.end(); U++)
    {
        if(U -> getName() == na && U -> getSurname() == su )
        {
            return U;
        }
    }
    exit(-1);
}

//wyszukiwanie użytkownika o zadanym atrybucie
std::vector<TUser>::iterator TData::findUser(int nu)
{
    for(std::vector<TUser>::iterator U = Users.begin(); U != Users.end(); U++)
    {
        if(U -> getNumber() == nu )
        {
            return U;
        }
    }
    exit(-1);
}
