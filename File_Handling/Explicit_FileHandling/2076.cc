#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
 
int main()
{
    char fileIn[100],fileOut[100];
    ifstream infile("garbage.doc",ios::binary);
    infile.getline(fileIn, 100 , '$')>>fileIn;
    cout<<"This how the input file text looks like"<<endl;
    cout<<fileIn;
    for(int i=0;i<strlen(fileIn);i++)
    {
        if(fileIn[i]-90<0)
        {
            fileOut[i] = fileIn[i];
        }
        else if(fileIn[i]-90>0)
        {
            fileOut[i] = fileIn[i]-32;
        }
    }
    cout<<"\n"<<fileOut;
    return 0;
}