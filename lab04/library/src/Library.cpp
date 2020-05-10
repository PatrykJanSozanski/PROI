//
//  Library.cpp
//  lab04
//
//  PROI: PROJECT NO4 (LAB04)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 09/06/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#include "Library.hpp"
using namespace std;

void Library::addInt(OldBook *book)
{
    dataInt.insert(dataInt.end(), *book);
    cout<<"New book has been added"<<endl;
}
void Library::addShort(NewBook *book)
{
    dataShort.insert(dataShort.end(), *book);
    cout<<"New book has been added"<<endl;
}
void Library::showInt()
{
    if(dataInt.empty())
    {
        cout<<"Collection of old books is empty"<<endl;
    }
    else
    {
        cout<<"Collection of old books:"<<endl;
        int number=1;
        for( list<OldBook>::iterator it = dataInt.begin(); it != dataInt.end(); ++it)
        {
            cout<<number<<":"<<endl<< *it<<endl;
            number++;
        }
    }
}
void Library::showIntDet()
{
    if(dataInt.empty())
    {
        cout<<"Collection of old books is empty"<<endl;
    }
    else
    {
        cout<<"Collection of old books:"<<endl;
        int number=1;
        for( list<OldBook>::iterator it = dataInt.begin(); it != dataInt.end(); ++it)
        {
            cout<<number<<":"<<endl;
            it -> bookDetails();
            number++;
        }
    }
}
void Library::showShort()
{
    if(dataShort.empty())
    {
        cout<<"Collection of new books is empty"<<endl;
    }
    else
    {
        cout<<"Collection of new books:"<<endl;
        int number=1;
        for(list<NewBook>::iterator it = dataShort.begin(); it != dataShort.end(); ++it)
        {
            cout<<number<<":"<<endl<< *it<<endl;
            number++;
        }
    }
}
void Library::showShortDet()
{
    if(dataShort.empty())
    {
        cout<<"Collection of new books is empty"<<endl;
    }
    else
    {
        cout<<"Collection of new books:"<<endl;
        int number=1;
        for( list<NewBook>::iterator it = dataShort.begin(); it != dataShort.end(); ++it)
        {
            cout<<number<<":"<<endl;
            it -> bookDetails();
            number++;
        }
    }
}
Library::~Library()
{
    cout<<"Clearing library"<<endl;
    dataInt.clear();
    cout<<"Collection of old books has been deleted"<<endl;
    dataShort.clear();
    cout<<"Collection of new books has been deleted"<<endl;
    
}
