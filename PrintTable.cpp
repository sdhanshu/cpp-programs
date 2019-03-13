#include<iostream>

using namespace std;

int main()
{
    cout<<" \nPrint Table "<<endl;
    cout<<"=============";

    int number;
    cout<<" \nEnter Your Number : ";
    cin>>number;

    int length;
    cout<<" \nEnter The Length Of The Table : ";
    cin>>length;

    int table;
    for(int i = 1; i <= length; i++)
    {
        table = number * i;
        cout<<number<<" x "<<i<<" = "<<table<<endl;
    }
    return 0;
}