#include<iostream>
using namespace std;
int main()
{ int f1,f2,f3;
    cout<<"first person age :- ";
    cin>>f1;
     cout<<"second person age :- ";
    cin>>f2;
     cout<<"third person age :- ";
    cin>>f3;
    if (f1>f2){
        if(f1>f3){
            cout<<"person 1 is oldest\n";
        }
    }else if(f2>f3) {cout<<"person 2 is oldest\n";}
    else{cout<<"third person is oldest\n";}
    return 0;
}