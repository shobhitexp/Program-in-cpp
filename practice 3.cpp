/*A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.*/
#include<iostream>
using namespace std;
int main()
{
    float mark;
    cout<<"enter your marks :- ";
    cin>>mark;
    if (mark<25){
    cout<<"Fail";
    }
    else if(mark >=25 && mark <45){
        cout<<"Grade E\n";
    }else if(mark >=45 && mark < 50){
        cout<<"Grade D\n";   
    }else if(mark >=50 && mark <60){
        cout<<"Grade C\n";
    }else if(mark >=60 && mark <80){
        cout<<"Grade B\n";
    }else{cout<<"A\n";}

    return 0;
}
 