//
//  NewBook.cpp
//  lab04
//
//  PROI: PROJECT NO4 (LAB04)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 09/06/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#include "NewBook.hpp"

void NewBook::bookDetails()
{
    Book<unsigned short>::bookDetails();
    std::cout<<"publishing house: "<<publishingHouse<<std::endl<<"publishing house contact number: "<<publishingHouseContactNumber<<std::endl<<std::endl;
}
std::string NewBook::getPublishingHouse()
{
    return publishingHouse;
}
int NewBook::getPublishingHouseContactNumber()
{
    return publishingHouseContactNumber;
}
