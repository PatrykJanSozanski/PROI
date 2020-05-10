//
//  functions.hpp
//  lab04
//
//  PROI: PROJECT NO4 (LAB04)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 09/06/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#ifndef functions_hpp
#define functions_hpp

#include <stdio.h>
#include <iostream>

struct EIncorrectValue
{
};
template <typename T>
T load(void)
{
    T x;
    std::cin.clear();
    std::cin >> x;
    if(std::cin.good())
    {
         return x;
    }
    else
    {
        std::cout<<"The typed value is incorrect"<<std::endl;
        std::cout<<"Try again"<<std::endl;
        EIncorrectValue exc;
        throw exc;
    }
}


#endif /* functions_hpp */
