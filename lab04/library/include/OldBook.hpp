//
//  OldBook.hpp
//  lab04
//
//  PROI: PROJECT NO4 (LAB04)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 09/06/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#ifndef OldBook_hpp
#define OldBook_hpp

#include <stdio.h>
#include "Book.hpp"
#include "functions.hpp"

class OldBook : public Book<unsigned int>
{
    std::string history;
    std::string origin;
    
public:
    OldBook(unsigned short age, std::string title, Date date) : Book(age, title, date)
    {
        std::cout<<"Type origin"<<std::endl;
        try
        {
            this -> origin = load<std::string>();
        }
        catch(EIncorrectValue exc)
        {
            this -> origin = "Unknown";
        }
        std::cout<<"Type history"<<std::endl;
        try
        {
            this -> history = load<std::string>();
        }
        catch(EIncorrectValue exc)
        {
            this -> history = "Unknown";
        }
    };
    OldBook(unsigned short age, std::string title, Date date, std::string o, std::string h) : Book(age, title, date)
    {
            this -> origin = o;
            this -> history = h;
    };
    std::string getOrigin();
    std::string getHistory();
    void bookDetails();
};

#endif /* OldBook_hpp */
