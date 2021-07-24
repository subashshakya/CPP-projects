#include<iostream>
 
using namespace std;
 
class Mybase{
    public:
        void show()
        {
            cout<<"base class show fucntion called"<<endl;
        }

        //since virtual keyword is used it acts like it doesnt exist while funtion overriding is being operated
        virtual void print()
        {
            cout<<"base class Print function is called"<<endl;
        }
};

class MyDerived:public Mybase{
public:
    void show()
    {
        cout<<"Derived class show function is called"<<endl;
    }

    //we dont use virtual in derived classes
    void print()
    {
        cout<<"derived class Print function is called"<<endl;
    }
};

int main()
{
    //base pointer is created
    Mybase *bptr;

    //derived class objects is created
    MyDerived dobj;

    //base class pointer is refrenced to derived class object
    bptr=&dobj;

    //the compiler doesn't know which print function is being called yet so this is a case of run time polymorphism
    bptr->print();
    //since virtual keyword is used the Print of derived class is called in this case.
    
    bptr->show();
    //here the funtion of the base class is called as virtual funtion is not created.
    return 0;
}


//output:
//Derived class Print is called
//base class show function is called
