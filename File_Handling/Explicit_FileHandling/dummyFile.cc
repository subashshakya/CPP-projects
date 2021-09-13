#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    char Garbage[100];
    ofstream outfile("garbage.doc", ios::binary);
    cout<<"Enter anything.."<<endl;
    cin.getline(Garbage, 100, '$');
    outfile<<Garbage;
    return 0;
}