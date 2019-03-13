#include<iostream>

using namespace std;

int main()
{
    float num1 , num2;
    char oprator;

    cout<<"\nCALCULATOR";
    cout<<"\n~~~~~~~~~~~";
    cout<<"\nEnter the first number : ";
    cin>>num1;
    cout<<"\nEnter the operator : ";
    cin>>oprator;
    cout<<"\nEnter the second number : ";
    cin>>num2;
    cout<<endl;

    if(oprator == '+')
    {
        cout<<num1 + num2;
    }
    else if(oprator == '-')
    {
        cout<<num1 - num2;
    }
    else if(oprator == '*')
    {
        cout<<num1 * num2;
    }
    else if(oprator == '/')
    {
         if(num2 == 0)
        {
            cout<<"Can't divide by 0 ";
        }
        else
        {
            cout<<num1 / num2;
        }
    }
    else
    {
        cout<<"You have typed the wrong Operator";
    }

    cout<<endl;
    return 0;
}