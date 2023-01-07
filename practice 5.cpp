//Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
#include<iostream>
using namespace std;
int main()
{
    char c;
    int x=0;
    cout<<"Please input your character :- ";
    cin>>c;
    if (int(c)<=90)
    {
        cout<<"Upper cased character :- "<<c<<"\n";
    }else 
    {cout<<"Lower cased character :- "<<c<<"\n";}
    return 0;
}