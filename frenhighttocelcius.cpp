#include<iostream>
using namespace std;
int main()
{
    float fa,ca;
    int calc;
    cout<<" For ferenhight calc press ->(1) or for celcius->(2) :- ";
    cin>>calc;
    if (calc==1){
    cout<< " Enter firenhight value :- " ;
    cin>>fa;
    ca=(fa-32)*5/9;
    cout<<" Celcius value of "<<fa<<"f :- "<<ca<<endl;
    }
    else
    {
        cout<<" Enter celcius value :- ";
        cin>>ca;
        fa=(ca*9/5)+32;
        cout<<" Ferenhight value of "<<ca<<"c :- "<<fa<<endl;
    }
    return 0;
}