/*#include<iostream>
using namespace std;
int main()
{
    int num,i,res;
    cout<<"Please enter your no :- ";
    cin>>num;
    i=2;
    for (i=2;i<num;i++){
        if (i%num==0){
            cout<<"prime"<<endl;}
            else{cout<<"not prime no"<<endl;}
    }

    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int num,i,res;
    cout<<"Please enter your no :- ";
    cin>>num;
    i=2;
    while(i<num){
        if (i%num!=0){
            cout<<" Prime number "<<endl;
        }else{cout<<" Not a prime number "<<endl;}
        i=i+1;
    }   

    return 0;
}
