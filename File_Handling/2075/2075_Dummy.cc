#include<iostream>
#include<fstream>

using namespace std;
 
int main()
{
    char Client_ID[15], name[30], address[20];
    int age,Account_ID;
    ofstream outfile("Client_Info.doc", ios::app);
    cout<<"Enter your client ID"<<endl;
    cin.getline(Client_ID, 15);
    cout<<"Enter Account ID"<<endl;
    cin>>Account_ID;
    cout<<"Enter your name"<<endl;
    cin.getline(name, 30, '$');
    cout<<"Enter your address"<<endl;
    cin.getline(address, 20, '$');
    cout<<"Enter your age"<<endl;
    cin>>age;
    outfile<<Client_ID<<endl;
    outfile<<Account_ID<<endl;
    outfile<<name<<endl;
    outfile<<address<<endl;
    outfile<<age<<endl;
}