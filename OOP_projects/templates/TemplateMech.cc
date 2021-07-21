#include<iostream>
 
using namespace std;
 
template <class t>
//template allows us to enter various datatypes in the same function. Basically creating a skeleton of how a function operates.
//calling a template : class_name <data type> object_name(maybe parameterized or not).

class Calculator
{
protected:
//'t' is a template datatype which is replaced by a desired datatype later.
    t Num1,Num2;

public:
    Calculator(t n1,t n2)
    {
        Num1=n1;
        Num2=n2;
    }

//fucntions with return type t
    t add()
    {
        return {Num1+Num2};
    }

    t sub()
    {
        return {Num1-Num2};
    }

    t multiply()
    {
        return {Num1*Num2};
    }

    t divison()
    {
        return {Num1/Num2};
    }

    void display()
    {
        cout<<"the sum of the given numbers are: "<<add()<<endl;
        cout<<"the difference between the given numbers are: "<<sub()<<endl;
        cout<<"the product of the given numbers are: "<<multiply()<<endl;
        cout<<"the quoitent of the given numbers are: "<<divison()<<endl;
    }
};

int main()
{
    //here 't' is replaced by int as a datatype and intCalc is just a object name.
    Calculator<int> intCalc(10,20); 
    Calculator<float> floatCalc(420.69,96.024);

    //objects calling the reqired methods
    intCalc.display();
    floatCalc.display();
}