#include<iostream>
using namespace std;
int main()
{
    int num,sum,i;
    cout<<"enter no :- ";
    cin>>num;
    sum=0;
    i=2;
    for (i=2;i<=num;){
        sum=sum+i;
        i=i+2;
    }
    cout<<" even sum is :- "<<sum<<endl;
    return 0;
}
