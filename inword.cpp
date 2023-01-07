#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int n,k;
    cin>>n>>k;
    string arr [9]= {"one","two","three","four","five","six","seven","eight","nine"};
    cout<<arr[n-1]<<endl;
    cout<<arr[k-1]<<endl;
    if(n%2==0){
        cout<<"even"<<endl;
    }else{cout<<"odd"<<endl;}
    
    if(k%2==0){
        cout<<"even"<<endl;
    }else{cout<<"odd"<<endl;}
    return 0;

}