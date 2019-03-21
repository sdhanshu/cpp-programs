#include<iostream>

using namespace std;

int main()
{
    int height;
    cout<<"\nHow much Height do you want for your Half Pyramid ? ";
    cin >> height;
    for(int i = 1; i <= height; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}