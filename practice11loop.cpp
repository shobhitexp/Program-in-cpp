#include<iostream>
using namespace std;
int main()
{
    cout<<"enter no :- ";
    int n;
    cin>> n;
    for (int i=2;i<=n;)
    {
        cout<<i<<"\n";
        i=i+2;
    }
    return 0;
}