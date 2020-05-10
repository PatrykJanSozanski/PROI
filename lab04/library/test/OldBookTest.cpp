//
//  OldBookTest.cpp
//  lab04
//
//  PROI: PROJECT NO4 (LAB04)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 09/06/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#define BOOST_TEST_MODULE lab03_test
#include <boost/test/included/unit_test.hpp>

#include "OldBook.hpp"
#include "Date.hpp"
#include <sstream>


using namespace boost::unit_test;

//g++ -I ../include Person_test.cpp -lboost_unit_test_framework


BOOST_AUTO_TEST_CASE(OldBook_Constructor_test)
{
    Date date1, date2, date3;
    date1.setTime(1, 1, 1, 1, 1);
    date2.setTime(11, 11, 11, 11, 11);
    date3.setTime(5, 5, 5, 5, 5);
    unsigned int age[] = {100, 120, 150};
    std::string title[] = {"Xxx", ".,/<>?", "!@#$%^&"};
    Date date[] = {date1, date2, date3};
    std::string origin[] = {"Poland", "Italy", "Germany"};
    std::string history[] = {"short", "long", "!adw222"};
    
    for(int i=0; i<3; i++)
    {
        OldBook NewOldBook(age[i], title[i], date[i], origin[i], history[i]);
        BOOST_CHECK_EQUAL(NewOldBook.getAge(), age[i]);
        BOOST_CHECK_EQUAL(NewOldBook.getTitle(), title[i]);
        BOOST_CHECK_EQUAL(NewOldBook.getOrigin(), origin[i]);
        BOOST_CHECK_EQUAL(NewOldBook.getHistory(), history[i]);
    }
}

BOOST_AUTO_TEST_CASE(Print_out_test)
{
    unsigned int age = 123;
    std::string title = "X999poxxxi";
    Date date;
    date.setTime(9, 9, 9, 9, 9);
    std::string origin = "woo21";
    std::string history = "123qwerty";
    std::string output;
    std::ostringstream class_output;
    
    OldBook NewOldBook(age, title, date, origin, history);
    output = "title: "+ title+ "\nage: "+ std::to_string(age)+ "\nDate of addition:\nDay: "+ std::to_string(date.getDay())+ " , month: "+ std::to_string(date.getMonth())+ " , year: "+ std::to_string(date.getYear())+ " , hour: "+ std::to_string(date.getHour())+ " : "+ std::to_string(date.getMinute())+ "\n";
    
    auto cout_buff = std::cout.rdbuf(); // save pointer to std::cout buffer
    std::cout.rdbuf(class_output.rdbuf()); // substitute internal std::cout buffer with
    
    std::cout << NewOldBook;
    std::cout.rdbuf(cout_buff);
    
    BOOST_CHECK_EQUAL(class_output.str(), output);
}

BOOST_AUTO_TEST_CASE(bookDetails_function_test)
{
    unsigned int age = 13;
    std::string title = "X%&sxi";
    Date date;
    date.setTime(2, 3, 4, 5, 6);
    std::string origin = "karrra";
    std::string history = "modls";
    std::string output;
    std::ostringstream class_output;
    
    OldBook NewOldBook(age, title, date, origin, history);
    output = "title: "+ title+ "\nage: "+ std::to_string(age)+ "\nDate of addition:\nDay: "+ std::to_string(date.getDay())+ " , month: "+ std::to_string(date.getMonth())+ " , year: "+ std::to_string(date.getYear())+ " , hour: "+ std::to_string(date.getHour())+ " : "+ std::to_string(date.getMinute())+ "\norigin: "+ origin+ "\nhistory: "+ history+ "\n\n";
    
    auto cout_buff = std::cout.rdbuf(); // save pointer to std::cout buffer
    std::cout.rdbuf(class_output.rdbuf()); // substitute internal std::cout buffer with
    
    NewOldBook.bookDetails();
    std::cout.rdbuf(cout_buff);
    
    BOOST_CHECK_EQUAL(class_output.str(), output);
}

