#include<iostream>
using namespace std;

int main()
{
    cout<<"\nPRINT BACK COUNTING";
    cout<<"\n===================";
    int number;
    cout<<"\nEnter your number : ";
    cin>>number;

    for(int i = number;i >= 1;i--)
    {
        cout<<i<<endl;
    }
    return 0;
}