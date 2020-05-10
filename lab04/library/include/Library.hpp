//
//  Library.hpp
//  lab04
//
//  PROI: PROJECT NO4 (LAB04)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 09/06/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED
#include <list>
#include "Book.hpp"
#include "NewBook.hpp"
#include "OldBook.hpp"

class Library
{
private:
    std::list<NewBook> dataShort; // keeps a list of new books
    std::list<OldBook> dataInt; //keeps a list of old books
public:
    void addInt(OldBook *book); //adds old book
    void addShort(NewBook *book); //adds new book
    void showInt(); //shows list of old books
    void showIntDet();
    void showShort(); //shows list of new books
    void showShortDet();
    ~Library();
};
#endif // LIBRARY_H_INCLUDED
