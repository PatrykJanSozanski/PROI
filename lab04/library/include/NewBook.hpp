//
//  NewBook.hpp
//  lab04
//
//  PROI: PROJECT NO4 (LAB04)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 09/06/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#ifndef NewBook_hpp
#define NewBook_hpp

#include <stdio.h>
#include "Book.hpp"
#include "functions.hpp"

class NewBook : public Book<unsigned short>
{
    std::string publishingHouse;
    int publishingHouseContactNumber;
    
public:
    NewBook(unsigned short age, std::string title, Date date) : Book(age, title, date)
    {
        std::cout<<"Type publishing house"<<std::endl;
        try
        {
            this -> publishingHouse = load<std::string>();
        }
        catch(EIncorrectValue exc)
        {
            this -> publishingHouse = "Unknown";
        }
        
        std::cout<<"Type publishing house contact number"<<std::endl;
        try
        {
            this -> publishingHouseContactNumber = load<int>();
        }
        catch(EIncorrectValue exc)
        {
            this -> publishingHouseContactNumber = 0;
        }
    };
    NewBook(unsigned short age, std::string title, Date date, std::string pH, int pHCN) : Book(age, title, date)
    {
        this -> publishingHouse = pH;
        this -> publishingHouseContactNumber = pHCN;
    };
    std::string getPublishingHouse();
    int getPublishingHouseContactNumber();
    void bookDetails();
};

#endif /* NewBook_hpp */
