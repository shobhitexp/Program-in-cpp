#include<iostream>
using namespace std;
int main()
{
    int num,i,sum;
    cout<<"enter your number :- ";
    cin>>num;
    i=1;
    sum=0;
    while(i<=num){
        sum=sum+i;
        i=i+1;
    }
    cout<<"Sum of Values is :- "<<sum<<endl;
    return 0;   
}
