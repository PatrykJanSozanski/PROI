//
//  main.cpp
//  lab04
//
//  PROI: PROJECT NO4 (LAB04)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 09/06/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#include "functions.hpp"
#include "Library.hpp"
#include "Book.hpp"
#include "NewBook.hpp"
#include "OldBook.hpp"
#include "Date.hpp"
using namespace std;

int main()
{
    char choice = 'q';
    char dataChoice;
    unsigned int ageI;
    unsigned short ageS;
    string title;
    char choiceDate;
    Date date;
    OldBook *oldBooks;
    NewBook *newBooks;
    Library Lib;
    
    while(choice != '0')
    {
        cout<<"Press 1 to add new book"<<endl;
        cout<<"Press 2 to add old book"<<endl;
        cout<<"Press 3 to show list of new books"<<endl;
        cout<<"Press 4 to show list of old books"<<endl;
        cout<<"Press 5 to show list of new books with details"<<endl;
        cout<<"Press 6 to show list of old books with details"<<endl;
        cout<<"Press 0 to end program"<<endl;
        choice = getchar();
        if(choice == '1')
        {
            system("clear");
            cout<<"Type age of book"<<endl;
           try
            {
                ageS = load<unsigned short>();
            }
            catch(EIncorrectValue exc)
            {
                getchar(); getchar(); getchar();
                system("clear");
                continue;
            }
            cout<<"Type title of book"<<endl;
            try
            {
                title = load<string>();
            }
            catch(EIncorrectValue exc)
            {
                getchar(); getchar(); getchar();
                system("clear");
                continue;
            }
            cout<<"Type day, month, year, hour and minute date of addition this book to library"<<endl<<"If you want set current date, press x"<<endl;
            cin>>choiceDate;
            if(choiceDate != 'x')
            {
                cin.unget();
                try
                {
                    date.setTime(load<int>(), load<int>(), load<long int>(), load<int>(), load<int>());
                }
                catch(EIncorrectValue exc)
                {
                    getchar(); getchar();
                    system("clear");
                    continue;
                }
            }
            else
            {
                date.setTime();
                cout<<"Your date is:"<<endl<<date;
                cout<<"press 1 to decrease day by 1"<<endl;
                cout<<"press 2 to decrease year by 1"<<endl;
                cout<<"press any key to skip this step"<<endl;
                cin>>dataChoice;
                if(dataChoice == '1')
                    date.changeDay();
                else if(dataChoice == '2')
                    date.changeYear();
                if(dataChoice=='1'||dataChoice=='2')
                    cout<<"Now your date is:"<<endl<<date;
            }
            newBooks = new NewBook(ageS, title, date);
            Lib.addShort(newBooks);
        }
        else if(choice == '2')
        {
            system("clear");
            cout<<"Type age of book"<<endl;
            try
            {
                ageI = load<unsigned int>();
            }
            catch(EIncorrectValue exc)
            {
                getchar(); getchar(); getchar();
                system("clear");
                continue;
            }
            cout<<"Type title of book"<<endl;
            try
            {
                title = load<string>();
            }
            catch(EIncorrectValue exc)
            {
                getchar(); getchar(); getchar();
                system("clear");
                continue;
            }
            cout<<"Type day, month, year, hour and minute date of addition this book to library"<<endl<<"If you want set current date, press x"<<endl;
            cin>>choiceDate;
            if(choiceDate != 'x')
            {
                cin.unget();
                try
                {
                    date.setTime(load<int>(), load<int>(), load<long int>(), load<int>(), load<int>());
                }
                catch(EIncorrectValue exc)
                {
                    getchar(); getchar();
                    system("clear");
                    continue;
                }
            }
            else
            {
                date.setTime();
                cout<<"Your date is:"<<endl<<date;
                cout<<"press 1 to decrease day by 1"<<endl;
                cout<<"press 2 to decrease year by 1"<<endl;
                cout<<"press any key to skip this step"<<endl;
                cin>>dataChoice;
                if(dataChoice == '1')
                    date.changeDay();
                else if(dataChoice == '2')
                    date.changeYear();
                if(dataChoice=='1'||dataChoice=='2')
                    cout<<"Now your date is:"<<endl<<date;
                
            }
            oldBooks = new OldBook(ageI, title, date);
            Lib.addInt(oldBooks);
        }
        else if(choice == '3')
        {
            system("clear");
            Lib.showShort();
        }
        else if(choice == '4')
        {
            system("clear");
            Lib.showInt();
        }
        else if(choice == '5')
        {
            system("clear");
            Lib.showShortDet();
        }
        else if(choice == '6')
        {
            system("clear");
            Lib.showIntDet();
        }
        else if(choice == '0')
        {
            system("clear");
            cout<<"Program has been ended"<<endl;
        }
        else
        {
            system("clear");
            cout<<"Unknown command"<<endl;
        }
        getchar(); getchar();
        system("clear");
    }
    return 0;
}

