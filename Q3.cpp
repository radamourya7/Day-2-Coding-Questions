Ques-03: Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.

Sample Input:-Enter a number : 5
Sample Output :- The month is: May"

CODE:=

#include<iostream>
using namespace std;
int main(){
    int month;
    cout<<"Enter a number: ";
    cin>>month;
    switch(month){
        case 1:
            cout<<"January";
            break;
        case 2:
            cout<<"February";
            break;
        case 3:
            cout<<"March";
            break;
        case 4:
            cout<<"April";
            break;
        case 5:
            cout<<"May";
            break;
        case 6:
            cout<<"June";
            break;
        case 7:
            cout<<"July";
            break;
        case 8:
            cout<<"August";
            break;
        case 9:
            cout<<"September";
            break;
        case 10:
            cout<<"October";
            break;
        case 11:
            cout<<"November";
            break;
        case 12:
            cout<<"December";
            break;
        default:
            cout<<"Invalid Input";
            break;
    }
    return 0;
}
