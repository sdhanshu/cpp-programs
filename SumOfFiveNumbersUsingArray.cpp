#include<iostream>

using namespace std;

int main()
{
    int no[5], i, sum = 0;
    cout<<"\nEnter five Numbers: \n";

    for(i = 0; i < 5; i++)
    {
        cin >> no[i];
    }

    for(i = 0; i < 5; i++)
    {
        sum = sum + no[i];
    }
    cout<<"Total: "<<sum<<endl;
    return 0;
}