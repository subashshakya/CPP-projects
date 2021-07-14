#include<iostream>

using namespace std;

class Person
{
protected:
    char Name[20];
    int Code;
public:
    Person()
    {
        cout<<"\nEnter your name: ";
        cin>>this->Name;

        cout<<"\nEnter your code: ";
        cin>>this->Code;
    }
};

class Account:public virtual Person
{
protected:
    double Pay;
public:
    Account()
    {
        cout<<"\nWhat is your salary? ";
        cin>>this->Pay;
    }
};

class Admin:public virtual Person
{
protected:
    double Experience;
public:
    Admin()
    {
        cout<<"\nHow many years of working exprience do you have?";
        cin>>this->Experience;
    }
};

class Master:public Admin,public Account
{
public:
    void displayAllData()
    {
        cout<<"\nName:  "<<this->Name;
        cout<<"\nCode:  "<<this->Code;
        cout<<"\nSalary is: "<<this->Pay;
        cout<<"\nexperience: "<<this->Experience;
    }
    void check()
    {
        char chk;
        cout<<"\nDo you want to update these data?"<<endl;
        cout<<"\nif yes press Y else press N"<<endl;
        cin>>chk;
        if(chk=='y'||chk=='Y')
        {
            Master m1;
            cout<<"\nThe new updated data is:"<<endl;
            m1.displayAllData();
        } 
        else
        {
            cout<<"\nthank you!";
        }
    }
};

int main()
{
    Master m1;
    m1.displayAllData();
    m1.check();
}