#include<iostream>
using namespace std;

int main ()
{
    cout<<" \nWelcome to Print Odd Numbers "<<endl;
    cout<<"----------------------------";
    int number;
    cout<<" \nEnter your number: ";
    cin>>number;
    for(int i = 1; i <= number; i += 2)
    {
    cout<<i<<endl;
    }
    return 0;
}