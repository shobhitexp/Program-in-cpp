/*
f
ef
def
cdef
bcdef
abcdef*/
#include <iostream>
using namespace std;

int main() 
{
    int row,col,n;
    cout<<"number :- ";
    cin>>n;
    row=1;
    while(row<=n){
        col=1;char c='a'+n-row;
        while(col<=row){
            cout<<c;
            col=col+1;
            c=c+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
