#include<iostream>

//student info

using namespace std;

class Student{
public:
    char Name[20];
    int Roll;
    char Address[30];
    double Percentage;

    void input()
    {
        cout<<"\nenter your name: ";
        cin>>Name;
        cout<<"\nenter your roll number: ";
        cin>>Roll;
        cout<<"\nenter your address: ";
        cin>>Address;
        cout<<"\nenter your percentage: ";
        cin>>Percentage;
    };

    void display()
    {
        if(Percentage>40)
        {
            cout<<"\nyour name:"<<Name;
            cout<<"\nyour roll number"<<Roll;
            cout<<"\nyour address: "<<Address;
            cout<<"\nyour percentage: "<<Percentage;
            cout<<"\nyou have passed in your exam";
        }
        else{
            cout<<"\nyou have failed in your exams";
        }
    };
};

int main()
{
    Student s1;
    s1.input();
    s1.display();
}