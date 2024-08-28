/*Program to caluclate the addition,subtraction,multiplication,division of two numbers */

#include<iostream>
using namespace std;
int main()
{
    int a,b,res;
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    char op;
    
    cout<<"Enter the operator\n";
    cout<<"+ for Addition - for Subtraction * for Multiplication / for Division\n";
    cin>>op;
    switch (op)
    {
    case '+':
        res=a+b;
        break;
    case '-':
        res=a-b;
        break;
    case '*':
        res=a*b;
        break;
    case '/':
        if(b==0)
        {
            cout<<"Division by zero not possible\n";
            exit(0);
        }
        res=a/b;
        break;
    default:
        break;
    }
    cout<<"The result of the "<<op<<" operation is "<<res; 
}