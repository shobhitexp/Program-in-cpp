#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<" Enter your character :- ";
    cin>>ch;
    int t=ch;
    if (t>=48 && t<=57){
    cout<<" Sir you entered numeric value "<<endl;
    }
    else if (t>=65 && t<=90){
    cout<<" Sir you entered upper cased value "<<endl;
    }
    else if (t>=97 && t<=122){
    cout<<" Sir you entered lower cased value "<<endl;
    }
    else{
        cout<<"Sir you entered any spacile value"<<endl;
    }
    return 0;
    }