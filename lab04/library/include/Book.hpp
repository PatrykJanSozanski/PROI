//
//  Book.hpp
//  lab04
//
//  PROI: PROJECT NO4 (LAB04)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 09/06/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include "Date.hpp"

template<class T>
class Book
{
private:
    T age;
    std::string title;
    Date date; //date of addition
public:
    Book(T age, std::string title, Date date)
    {
        this->age = age;
        this->title = title;
        this->date = date;
    }
    virtual void bookDetails()
    {
        std::cout<<*this;
    }
    T getAge()
    {
        return age;
    }
    std::string getTitle()
    {
        return title;
    }
    Date getDate()
    {
        return date;
    }
    
    virtual ~Book()
    {
        std::cout<<"Book: "<<title<<" has been deleted"<<std::endl;
    }
    friend std::ostream& operator<<(std::ostream &output, const Book &b)
    {
        output<<"title: "<<b.title<<std::endl<<"age: "<<b.age<<std::endl<<b.date;
        return output;
    }
};

#endif // BOOK_H_INCLUDED
