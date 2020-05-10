//
//  number.hpp
//  lab02
//
//  PROI: PROJECT NO2 (LAB02)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 01/03/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//


#ifndef number_hpp
#define number_hpp

#include <stdio.h>

class TCalculator
{
private:
    double first;
    double second;
    int magic;
    
    double sum;
    double difference;
    double product;
    double quotient;
    
public:
    //konstruktor
    //
    //przypisuje wartości inicjalne liczb "first" i "second"
    TCalculator(double f = 1, double s = 1);
    
    //funkcje składowe
    //
    //dodawanie
    double add();
    //dodawanie - ile liczb znaczących
    double add(int coma);
    
    //odejmowanie
    double subtract();
    //odejmowanie - ile miejsc liczb znaczących
    double subtract(int coma);
    
    //mnożenie
    double multiply();
    //mnożenie - ile liczb znaczących
    double multiply(int coma);

    
    //dzielenie
    double divide();
    //dzielenie - ile liczb znaczących
    double divide(int coma);
    
    //pokazuje wartości liczb "first" i "second"
    void show();
    
    //pokazuje wartości liczb "first" i "second" oraz wyniki działań arytmetycznych na nich wykonanych
    void show(char);
    
    //pokazuje wartości liczb "first" i "second" oraz wyniki działań arytmetycznych na nich wykonanych z dokładnością do podanej liczby licz znaczących
    void show(int coma);
    
    //zamienia między sobą wartości liczb "first" i "second"
    void swap();
    
    //pozwala na zmianę liczby "first"
    void changeFirst();
    
    //pozwala na zmianę liczby "second"
    void changeSecond();

    //operatory
    //
    //chcę, żeby były inline, więc umieszczam ciała w pliku .hpp
    //
    //zwiększa liczbę "first" o zadaną stała
    inline TCalculator operator>(const double &d)
    {
        this -> first += d;
        return *this;
    }
    
    //zwiększa liczbę "second" o zadaną stała
    inline TCalculator operator>>(const double &d)
    {
        this -> second += d;
        return *this;
    }
    
    //zmniejsza liczbę "first" o zadaną stała
    inline TCalculator operator<(const double &d)
    {
        this -> first -= d;
        return *this;
    }

    //zmniejsza liczbę "second" o zadaną stała
    inline TCalculator operator<<(const double &d)
    {
        this -> second -= d;
        return *this;
    }
    
private:
    //losowo przydziela zmiennej "magic" wartość True lub False
    void makeMagic();
    
    //zaczyna generować liczby losowe
    void startMagic();
    
};

#endif /* number_hpp */
