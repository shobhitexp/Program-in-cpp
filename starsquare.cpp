#include<iostream>
using namespace std;
int main()
{
    int i,num;
    cout<<"enter no :- ";
    cin>>num;
    i=1;
    
    while (i<=num){
        int j=1;
        while(j<=num){
            cout<<"* ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    return 0;
    
}