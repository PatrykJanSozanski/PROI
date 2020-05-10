//
//  OldBook.cpp
//  lab04
//
//  PROI: PROJECT NO4 (LAB04)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 09/06/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#include "OldBook.hpp"

void OldBook::bookDetails()
{
    Book<unsigned int>::bookDetails();
    std::cout<<"origin: "<<origin<<std::endl<<"history: "<<history<<std::endl<<std::endl;
}
std::string OldBook::getOrigin()
{
    return origin;
}
std::string OldBook::getHistory()
{
    return history;
}

