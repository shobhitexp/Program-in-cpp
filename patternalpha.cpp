#include<iostream>
using namespace std;
int main()
{
    int row,col,n,x;
    cout<<"num :- ";
    cin>>n;
    row=1;
    x=97;
    while (row<=n){
        col=1;
        while(col<=row){
            char b=x;
            cout<<b<<" ";
            x=x+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}