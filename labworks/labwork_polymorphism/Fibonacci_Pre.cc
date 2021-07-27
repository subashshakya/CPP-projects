#include<iostream>
 
using namespace std;
 
int main()
{
    int ini=1;
    int second=1;
    int i,third,cont;
    cout<<ini<<endl;
    cout<<second<<endl;
    third=ini+second;
    for(i=0;i<10;i++)
    {
        cout<<third<<endl;
        cont=ini;
        ini=second;
        second=third;
        third=ini+second;
    }
}