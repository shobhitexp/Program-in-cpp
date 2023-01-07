#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter number :- ";
    cin>>n;
    i=n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<"* ";
            j=j+1;
        }
        cout<<endl;
        i=i-1;
        if(i==0){
            break;
        }
    }
    return 0;
}