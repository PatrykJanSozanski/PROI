//
//  number.cpp
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
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <ctime>

//stała wyświetlana jako wynik w przypadku błędnego prowadzenia danych
const double DEVIDING_ERROR = 9e999;

//konstruktor
//
//przypisuje wartości inicjalne liczb "first" i "second" i zaczyna generować liczby losowe
TCalculator::TCalculator(double f, double s)
{
    first = f;
    second = s;
    
    startMagic();
}

//funkcje składowe
//
//dodawanie
double TCalculator::add()
{
    makeMagic();
    
    if(magic%2)
    {
        std::cout << "Magic happend" << std::endl;
        std::cout << first << " + " << second << " = " << magic << std::endl << std::endl;
        return magic;
    }
    else
    {
        sum = first + second;
        std::cout << first << " + " << second << " = " << sum << std::endl << std::endl;
        return sum;
    }
}

//dodawanie - ile liczb znaczących
double TCalculator::add(int coma)
{
    makeMagic();
    
    if(magic%2)
    {
        std::cout << "Magic happend" << std::endl;
        std::cout << first << " + " << second << " = " << std::setprecision(coma) << magic << std::endl << std::endl;
        return magic;
    }
    else
    {
        sum = first + second;
        std::cout << first << " + " << second << " = " << std::setprecision(coma) << sum << std::endl << std::endl;
        return sum;
    }
}

//odejmowanie
double TCalculator::subtract()
{
    makeMagic();
    
    if(magic%2)
    {
        std::cout << "Magic happend" << std::endl;
        std::cout << first << " - " << second << " = " << magic << std::endl << std::endl;
        return magic;
    }
    else
    {
        difference = first - second;
        std::cout << first << " - " << second << " = " << difference << std::endl << std::endl;
        return difference;
    }
}

//odejmowanie - ile liczb znaczących
double TCalculator::subtract(int coma)
{
    makeMagic();
    
    if(magic%2)
    {
        std::cout << "Magic happend" << std::endl;
        std::cout << first << " - " << second << " = " << std::setprecision(coma) << magic << std::endl << std::endl;
        return magic;
    }
    else
    {
        difference = first - second;
        std::cout << first << " - " << second << " = " << std::setprecision(coma) << difference << std::endl << std::endl;
        return difference;
    }
}

//mnożenie
double TCalculator::multiply()
{
    makeMagic();
    
    if(magic%2)
    {
        std::cout << "Magic happend" << std::endl;
        std::cout << first << " * " << second << " = " << magic << std::endl << std::endl;
        return magic;
    }
    else
    {
        product = first * second;
        std::cout << first << " * " << second << " = " << product << std::endl << std::endl;
        return product;
    }
}

//mnożenie - ile liczb znaczących
double TCalculator::multiply(int coma)
{
    makeMagic();
    
    if(magic%2)
    {
        std::cout << "Magic happend" << std::endl;
        std::cout << first << " * " << second << " = " << std::setprecision(coma) << magic << std::endl << std::endl;
        return magic;
    }
    else
    {
        product = first * second;
        std::cout << first << " * " << second << " = " << std::setprecision(coma) << product << std::endl << std::endl;
        return product;
    }
}

//dzielenie
double TCalculator::divide()
{
    makeMagic();
    
    if(magic%2)
    {
        std::cout << "Magic happend" << std::endl;
        std::cout << first << " / " << second << " = " << magic << std::endl << std::endl;
        return magic;
    }
    else
    {
        if(second)
        {
            quotient = first / second;
            std::cout << first << " / " << second << " = " << quotient << std::endl << std::endl;
        }
        else
        {
            std::cout << "The expression has no meaning: dividing by 0 is undefined" << std::endl << std::endl;
            quotient = DEVIDING_ERROR;
        }
        
        return quotient;
    }
}

//dzielenie - ile liczb znaczących
double TCalculator::divide(int coma)
{
    makeMagic();
    
    if(magic%2)
    {
        std::cout << "Magic happend" << std::endl;
        std::cout << first << " / " << second << " = " << std::setprecision(coma) << magic << std::endl << std::endl;
        return magic;
    }
    else
    {
        if(second)
        {
            quotient = first / second;
            std::cout << first << " / " << second << " = " << std::setprecision(coma) << quotient << std::endl << std::endl;
        }
        else
        {
            std::cout << "The expression has no meaning: dividing by 0 is undefined" << std::endl;
            quotient = DEVIDING_ERROR;
        }
        
        return quotient;
    }
}

//wyświetlanie liczb "first" i "second"
void TCalculator::show()
{
    std::cout << "first = " << first << std::endl;
    std::cout << "second = " << second << std::endl;
    std::cout << std::endl;
}

//pokazuje wartości liczb "first" i "second" oraz wyniki działań arytmetycznych na nich wykonanych
void TCalculator::show(char)
{
    std::cout << "first = " << first << std::endl;
    std::cout << "second = " << second << std::endl;
    std::cout << std::endl;
    add();
    subtract();
    multiply();
    divide();
}

//pokazuje wartości liczb "first" i "second" oraz wyniki działań arytmetycznych na nich wykonanych z dokładnością do podanej liczby liczb znaczących
void TCalculator::show(int coma)
{
    std::cout << "first = " << first << std::endl;
    std::cout << "second = " << second << std::endl;
    std::cout << std::endl;
    add(coma);
    subtract(coma);
    multiply(coma);
    divide(coma);
}

//zamienia między sobą wartości liczb "first" i "second"
void TCalculator::swap()
{
    std::swap(first, second);
    std::cout << "Numbers have been swaped" << std::endl << std::endl;
    show();
}

//pozwala na zmianę liczby "first"
void TCalculator::changeFirst()
{
    double newF;
    std::cout << "Type in the new value of the first number: ";
    std::cin >> newF;
    first = newF;
    std::cout << "The new value of the first number is " << newF << std::endl << std::endl;
}

//pozwala na zmianę liczby "second"
void TCalculator::changeSecond()
{
    double newS;
    std::cout << "Type in the new value of the second number: ";
    std::cin >> newS;
    second = newS;
    std::cout << "The new value of the second number is " << newS << std::endl << std::endl;
}

//generuje liczbę losową i przypisuje ją do "magic"
void TCalculator::makeMagic()
{
    magic = rand()%2000001 - 1000000;
}

//zaczyna generować liczby losowe
void TCalculator::startMagic()
{
  srand(time(NULL));
}
