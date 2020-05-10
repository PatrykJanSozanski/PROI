//
//  main.cpp
//  lab01
//
//  PROI: PROJECT NO1 (LAB01)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 01/03/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#include <iostream>
#include "adding.h"

int main(int argc, const char * argv[]) {
    
    float x = 0;
    float y = 0;
    
    std::cout << "Type in the first number: ";
    std::cin >> x;
    
    std::cout << "Type in the second number: ";
    std::cin >> y;
    
    float sum = adding(x, y);
    
    std::cout << "The sum: " << x << " + " << y << " is " << sum << std::endl;
    
    return 0;
}
