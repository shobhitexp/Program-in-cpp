/*#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter number :- ";
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<" "<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter number :- ";
    cin>>n;
    i=1;
    for(i=1;i<=n;i++){
        j=1;
        for(j=1;j<=n;j++){
            cout<<" "<<j;   
        }
        cout<<endl;
    }
    return 0;
}