#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str1[20],str2[20];
    int res;
    cout<<"\nenter any word:";
    cin>>str1;
    cout<<"\nenter any word again:";
    cin>>str2;
    res=strncmp(str1,str2,20);
    if(res==0)
    {
        cout<<"\nBoth of the entered words are same";
    }
    else{
        cout<<"\nEntered words are not the same";
    }
}