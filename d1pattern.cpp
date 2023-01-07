/*  
     *
    **
   ***
  ****
 *****
******
*/
#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"number :- ";
    cin>>n;
    row=1;
    while(row<=n){
        int s=n-row;
        while(s){
            cout<<" ";
            s=s-1;
        }
        col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
            }
        cout<<endl;
        row=row+1; 
    }
    return 0;
}