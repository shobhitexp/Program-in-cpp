/*
A B C D E F 
B C D E F G 
C D E F G H 
D E F G H I 
E F G H I J 
F G H I J K */
#include <iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"number :- ";
    cin>>n;
    row=1;
    while(row<=n){
        col=1;
        while(col<=n){
            char c='A'+row+col-2;
            cout<<c<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}