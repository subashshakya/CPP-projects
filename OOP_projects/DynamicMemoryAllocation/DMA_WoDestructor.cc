//illustration of how the memory is managed with New and Delete keywords to delete the memory space of the function.

#include<iostream>

using namespace std;

class Parent
{
    public:
    Parent()
    {
        cout<<"This is constructor of the base class."<<endl;
    }

    void Display()
    {
        cout<<"This is a Method of the base class."<<endl;
    }

    ~Parent()
    {
        cout<<"This is destructor of the base class."<<endl;
    }
};

class Child:public Parent
{
    public:
    Child()
    {
        cout<<"This is the constructor of the derived class."<<endl;
    }

    ~Child()
    {
        cout<<"This is the Destrctor of the derived class."<<endl;
    }
};

int main()
{
    Parent *p1;
    p1=new Child;
    p1->Display();
    delete p1;
}

//Here the destructor of the derived class is not called 