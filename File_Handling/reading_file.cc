#include<iostream>
#include<fstream> 
using namespace std;
 
int main()
{
    char name[25],address[25], email[30];
    int rollno;
    ifstream infile("user_info.doc");
    infile>>name;
    infile>>address;
    infile>>email;
    infile>>rollno;
    cout<<"Retriving the required data from the file:"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Email-address: "<<email<<endl;
    cout<<"Roll number"<<rollno<<endl;
    return 0;
}