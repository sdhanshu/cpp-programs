#include<iostream>
using namespace std;

int main ()
{
    cout<<"\nSum of Natural Numbers";
    cout<<"\n----------------------";
    int number;
    cout<<"\nEnter your number: ";
    cin>>number;
    int sum;
    sum = 0;
    for(int i = 1; i <= number; i++)
    {
        sum = i + sum;
    }
    cout<<sum<<endl;
    return 0;
}