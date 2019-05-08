#include<iostream>
using namespace std;

int main ()
{
    cout<<"\nPrint Factors";
    cout<<"\n*************";
    int number;
    cout<<"\nEnter the number : ";
    cin>> number;

    for ( int i = 1; i <= number ; i++)
    {
        if (number % i == 0)
        {
            cout<< i <<endl;
        }
    }
    return 0;
}