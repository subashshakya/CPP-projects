//how costructor and destructors are called in inherited class.

//The constructor of a base class which is inherited by a derived class then it will be called first.

//The Destructor of a base class which is inherited by a derived class then it will be called at last. Destructors use LIFO as a basic priciple for execution

#include<iostream>

using namespace std;

class Parent
{
    public:
    Parent()
    {
        cout<<"\nBase class's constructor is called.";
    }

    ~Parent()
    {
        cout<<"\nDestructor of the base class is called.";
    }
};

class Derived1:public Parent
{
    public:
    Derived1()
    {
        cout<<"\nFirst derived class's constructor is called.";
    }

    ~Derived1()
    {
        cout<<"\nDestructor of the first derived class is called.";
    }
};

class Derived2:public Derived1
{
    public:
    Derived2()
    {
        cout<<"\nSecond derived class's constructor is called.";
    }

    ~Derived2()
    {
        cout<<"\nDestructor of the second derived class is called.";
    }
};

int main()
{
    Derived2 c1;
    return 0;
}

//output:
//Base class's constructor is called.
//First derived class's constructor is called.
//Second derived class's constructor is called.

//Destructors are called in reverse order of Constructors

//Destructor of the second derived class is called.
//Destructor of the first derived class is called.
//Destructor of the base class is called.