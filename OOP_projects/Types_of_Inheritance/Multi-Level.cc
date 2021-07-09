//demonstration of how MULTI-LEVEL INHERITANCE is processed

#include<iostream>

using namespace std;

class GrandParent
{
    public:
    GrandParent()
    {
        cout<<"\nThis is the root class.";
    }
};

//Here Parent class Inherits GrandParent class 
class Parent:public GrandParent
{
    public:
    Parent()
    {
        cout<<"\nThis is the branch class.";
    }
};

//Here Child class Inherits Parent class meanwhile Child class can also access GrandParent class by MULTI-LEVEL INHERITANCE
class Child:public Parent
{
    public:
    Child()
    {
        cout<<"\nThis is the leaf class.";
    }
};

int main()
{
    Child c1;
    return 0;
}

//firstly GrandParent or the Root class is called then Parent and lastly Child is called