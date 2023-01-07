/*
a 
b c 
c d e 
d e f g 
e f g h i 
f g h i j k  
*/
#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"num :- ";
    cin>>n;
    row=1;
    while (row<=n){
        col=1;
        while(col<=row){
            char s = 'a'+row+col-2;
            cout<<s<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}