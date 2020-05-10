//
//  main.cpp
//  lab02
//
//  PROI: PROJECT NO2 (LAB02)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 01/03/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#include <iostream>
#include "Calculator.hpp"

int main(int argc, const char * argv[]) {
    
    TCalculator Calculator;
    char choice;
    int precision;
    double increase; //decrease
    
    for(;;)
    {
        std::cout << "------------------------MENU------------------------" << std::endl;
        std::cout << "a) Enter/change values " << std::endl;
        std::cout << "b) Show values" << std::endl;
        std::cout << "c) Show values and results" << std::endl;
        std::cout << "d) Show values and results with specific precision" << std::endl;
        std::cout << "e) Add" << std::endl;
        std::cout << "f) Subtract" << std::endl;
        std::cout << "g) Multiply" << std::endl;
        std::cout << "h) Divide" << std::endl;
        std::cout << "i) Add with specific precision" << std::endl;
        std::cout << "j) Subtract with specific precision" << std::endl;
        std::cout << "k) Multiply with specific precision" << std::endl;
        std::cout << "l) Divide with specific precision" << std::endl;
        std::cout << "m) Change first factor's value" << std::endl;
        std::cout << "n) Change second factor's value" << std::endl;
        std::cout << "o) Increase first value" << std::endl;
        std::cout << "p) Increase second value" << std::endl;
        std::cout << "q) Decrease first value" << std::endl;
        std::cout << "r) Decrease second value" << std::endl;
        std::cout << "s) Swap values" << std::endl;
        std::cout << "x) Exit" << std::endl;
        
        
        std::cout << std::endl;
        std::cout << "-> ";
        
        choice = getchar();
        
        switch (choice) {
            case 'a':
                std::cout << std::endl;
                Calculator.changeFirst();
                Calculator.changeSecond();
                break;
                
            case 'b':
                std::cout << std::endl;
                Calculator.show();
                break;
                
            case 'c':
                std::cout << std::endl;
                Calculator.show('r');
                break;
                
            case 'd':
                std::cout << std::endl;
                std::cout << "Set precision: ";
                std::cin >> precision;
                Calculator.show(precision);
                break;
                
            case 'e':
                std::cout << std::endl;
                Calculator.add();
                break;
                
            case 'f':
                std::cout << std::endl;
                Calculator.subtract();
                break;
                
            case 'g':
                std::cout << std::endl;
                Calculator.multiply();
                break;
                
            case 'h':
                std::cout << std::endl;
                Calculator.divide();
                break;
                
            case 'i':
                std::cout << std::endl;
                std::cout << "Set precision: ";
                std::cin >> precision;
                Calculator.add(precision);
                break;
                
            case 'j':
                std::cout << std::endl;
                std::cout << "Set precision: ";
                std::cin >> precision;
                Calculator.subtract(precision);
                break;
                
            case 'k':
                std::cout << std::endl;
                std::cout << "Set precision: ";
                std::cin >> precision;
                Calculator.multiply(precision);
                break;
                
            case 'l':
                std::cout << std::endl;
                std::cout << "Set precision: ";
                std::cin >> precision;
                Calculator.divide(precision);
                break;
                
            case 'm':
                std::cout << std::endl;
                Calculator.changeFirst();
                break;
                
            case 'n':
                std::cout << std::endl;
                Calculator.changeSecond();
                break;
                
            case 'o':
                std::cout << std::endl;
                std::cout << "Set increase: ";
                std::cin >> increase;
                Calculator > increase;
                break;
                
            case 'p':
                std::cout << std::endl;
                std::cout << "Set increase: ";
                std::cin >> increase;
                Calculator >> increase;
                break;
                
            case 'q':
                std::cout << std::endl;
                std::cout << "Set decrease: ";
                std::cin >> increase;
                Calculator < increase;
                break;
                
            case 'r':
                std::cout << std::endl;
                std::cout << "Set decrease: ";
                std::cin >> increase;
                Calculator << increase;
                break;
                
            case 's':
                std::cout << std::endl;
                Calculator.swap();
                break;
                
            case 'x':
                std::cout << std::endl;
                std::cout << "GOODBYE" << std::endl;
                exit(0);
                break;
                
            default:
                std::cout << std::endl;
                std::cout << "There is not such option" << std::endl;
                break;
        }
        
        getchar(); getchar();
        system("clear");
    }
    
    return 0;
}
