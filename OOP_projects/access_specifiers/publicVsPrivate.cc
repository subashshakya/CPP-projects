#include<iostream>

using namespace std;

class Parent
{
private:
    float height;

public: 
    char surname='surname';

    Parent()
    {
        height=0;
    }
    
    void display()
    {
        cout<<"\nThis is a sample surname: "<<surname;
    }

    float getHeight()
    {
        cout<<"\nEnter your parent's height: ";
        cin>>height;
        return height;
    }
};

class Child:public Parent
{
private:
    float newHeight;

public:
    char name='any name';

    void getNewHeight()
    {
        cout<<"Enter your height:";
        cin>>newHeight;
    }

    void displayName()
    {
        cout<<"\nThe name that is assigned: "<<name;
    }

    void displayPrivHeight()
    {
        Child C1;
        C1.height=C1.getHeight();
        //C1.height isnt possible as it is incapsulated by private access specifier
        //if we use Proteced Access Specifiers this is possible through the concept of Inheritance
    }

    void changeSurname()
    {
        Child C2;
        C2.surname='shakya';
        //surname is accessable as it is declared by public access specifier
        cout<<"\nnew surname assigned is: "<<C2.surname;
    }
};

int main()
{
    Parent p1;
    Child c1;
    c1.display();
    c1.displayPrivHeight();//this function will give error as there is no data returned in the Method
    //protected Access specifier will solve this problem

}