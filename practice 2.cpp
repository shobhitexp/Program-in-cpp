//Take values of length and breadth of a rectangle from user and check if it is square or not.//
#include<iostream>
using namespace std;
int main()
{
    float length,breath;
    cout<<"Enter length :- ";
    cin>>length;
    cout<<"Enter breath :- ";
    cin>>breath;
    if(length==breath){
        cout<<"Square";
    }else{cout<<"Rectangle";
    }
    return 0;
}