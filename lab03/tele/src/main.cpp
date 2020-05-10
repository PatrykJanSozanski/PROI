//
//  main.cpp
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

#include <iostream>

TData* list = new TData;


int main()
{

    list -> setAdress(list);

    list -> showNumberOfUsers();

    list -> addNewUser();
    list -> addNewUser();
    list -> addNewUser();

    list -> showNumberOfUsers();

    list -> removeUser();

    list -> showNumberOfUsers();

    list -> showUserByName();
    list -> showUserByNumber();

    list -> sendMessage();

    delete list;


    return 0;
}
