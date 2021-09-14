#include<iostream>
#include<fstream>

using namespace std;
 
int main()
{
    int age, Account_ID;
    char name[30], Client_ID[15], Address[20];
    ifstream infile("Client_Info.doc", ios::app | ios::binary);
    infile>>Client_ID;
    infile>>Account_ID;
    infile>>name;
    infile>>Address;
    infile>>age;
    cout<<"Client_ID: "<<Client_ID<<endl;
    cout<<"Account_ID: "<<Account_ID<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<Address<<endl;
    cout<<"Age: "<<age<<endl;
}