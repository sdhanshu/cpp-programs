#include<iostream>
using namespace std;

int main ()
{
    cout<<" \nPrint Even Counting "<<endl;
    cout<<"-------------------";
    int number;
    cout<<" \nEnter your number: ";
    cin>>number;
    for(int i = 2; i <= number; i += 2)
    {
    cout<<i<<endl;
    }
    return 0;
}