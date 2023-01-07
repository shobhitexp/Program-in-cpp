/*
a b c d e f 
b c d e f g 
c d e f g h 
d e f g h i 
e f g h i j 
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
        while(col<=n){
            char s = 'a'+row+col-2;
            cout<<s<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}