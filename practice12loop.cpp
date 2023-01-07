#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    sum=0;
    cout<<"enter no :- ";
    cin>>n;
    for (int i=1;i<=n;)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}