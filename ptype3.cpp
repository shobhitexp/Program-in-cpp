/*
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
6 5 4 3 2 1  */
#include <iostream> 
using namespace std;
int main()
{
    int row,col,n,x=1;
    cout<<"enter your value :- ";
    cin>>n;
    row = 1;
    while (row<=n){
        col=1;
        while(col<=row){
            cout<<row-col+1<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
