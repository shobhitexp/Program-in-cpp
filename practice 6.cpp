#include<iostream>
using namespace std;
int main()
{
    char year [5];
    cin>>year;
    if(year%4==0){
    cout<<"your given year is leap year\n";
    }else if (year%400==0){
    cout<<"your given year is leap year\n";
    }else{
        cout<<"Your given year is not leap year\n";
    }
    return 0;
}