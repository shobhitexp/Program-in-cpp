/*1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9 
6 7 8 9 10 11 */
#include <iostream> 
using namespace std;
int main()
{
    int row,col,n,x=1;
    cout<<"enter your value :- ";
    cin>>n;
    row = 1;
    while (row<=n){
        col=1;x=row;
        while(col<=row){
            cout<<x<<" ";
            x=x+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
