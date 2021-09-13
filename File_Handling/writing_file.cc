#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    char name[25], address[25], email[30];
    int rollno;
    ofstream outfile("user_info.doc");
    cout<<"enter your name:"<<endl;
    cin.getline(name, 25);
    outfile<<name<<endl;
    cout<<"Enter your address"<<endl;
    cin.getline(address, 25);
    outfile<<address<<endl;
    cout<<"Enter your email address:"<<endl;
    cin.getline(email, 30);
    outfile<<email<<endl;
    cout<<"Enter your roll number"<<endl;
    cin>>rollno;
    outfile<<rollno<<endl;
    return 0;
}