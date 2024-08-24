Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
Grade Criteria:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: 0-59

Sample Input:- Enter the score: 85
Sample Output:- Grade: B"

CODE:=

#include<iostream>
using namespace std;
int main(){
    int mark;
    cout<<"Enter the score: ";
    cin>>mark;
    if(mark>=90 && mark<=100){
        cout<<"Grade: A";
    }
    else if(mark<=89 && mark>=80){
        cout<<"Grade: B";
    }
    else if(mark<=79 && mark>=70){
        cout<<"Grade: C";
    }
    else if(mark<=69 && mark>=60){
        cout<<"Grade: D";
    }
    else{
        cout<<"Grade: F";
    }
    return 0;
}
