/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
    
 double num1,num2;
 char oper;
 
 
 cout<<"Enter an operator( + , - , / , * ) : ";
 cin>>oper;
 
 cout<<"Enter two numbers : ";
 cin>>num1>>num2;
 
 switch(oper){
     case '+' : cout<<"num1+num2 = "<<num1+num2;
     break;
     case '-' : cout<<"num1-num2 = "<<num1-num2;
     break;
     case '/' : cout<<"num1/num2 = "<<num1/num2;
     break;
     case '*' : cout<<"num1*num2 = "<<num1*num2;
     break;
    default:
    cout<<"Invalid operator, Please enter ( + , - , * ,or / )";
 }
    
    
    return 0;
}