#include<iostream>

using namespace std;

class FirstClass
{
    public:
    FirstClass()
    {
        cout<<"\nFirst class is called.";
    }
};

class SecondClass
{
    public:
    SecondClass()
    {
        cout<<"\nSecond class is called.";
    }
};
//Here the FirstClass and SecondClass does not inherit any class

//ThirdClass inherits both the FirstClass and SecondClass, in that particular order.

//After ':' symbol the class declared first will be called and so on
class ThirdClass:public FirstClass,public SecondClass
{
    public:
    ThirdClass()
    {
        cout<<"\nThird class is called.";
    }
};

int main()
{
    ThirdClass C1;
    return 0;
}

//For the output FirstClass is called first, then SecondClass is called and lastly ThirdClass is called.