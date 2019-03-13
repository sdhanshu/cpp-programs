#include<iostream>
using namespace std;

int main ()
{
    cout<<" \nPrint Counting "<<endl;
    cout<<"----------------";
    int number;
    cout<<" \nEnter your number: ";
    cin>>number;

    for(int i = 1; i <= number; i++)
    {
    cout<<i<<endl;
    }
    return 0;
}