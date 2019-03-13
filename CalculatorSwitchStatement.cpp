#include<iostream>

using namespace std;

int main()
{
    float num1, num2;
    char operatr;

    cout<<"\nCALCULATOR";
    cout<<"\n**********"<<endl;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"\nEnter the operator: ";
    cin>>operatr;
    cout<<"\nEnter the second number: ";
    cin>>num2;
    cout<<endl;

    switch(operatr)
    {
        case '+':
        {
            cout<<num1<<operatr<<num2<<"="<<num1+num2;
            break;
        }

        case '-':
        {
            cout<<num1<<operatr<<num2<<"="<<num1-num2;
            break;
        }

        case '/':
        {
            cout<<num1<<operatr<<num2<<"="<<num1/num2;
            break;
        }

        case '*':
        {
            cout<<num1<<operatr<<num2<<"="<<num1*num2;
            break;
        }

        default:
        {
            cout<<"You have typed the wrong operator";
        }
    }
    
    cout<<endl;
    return 0;
}