#include <iostream>

using namespace std;

int main()
{
    int height;
    int number = 0;
    cout<<"\nHow much Height do you want for your Floyd's Inverted Half Pyramid ? ";
    cin>> height;
    for(int i = 1; i <= height; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<++number<<" ";
        }
        cout<<endl;
    }
    return 0;
}