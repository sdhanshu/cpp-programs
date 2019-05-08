#include<iostream>

using namespace std;

int main()
{
    int rows, space, height, i, h;
    cout<<"\nHow much height do you want for your Pyramid ? ";
    cin >> height;
    h = height;

    for(rows = 1; rows <= height; rows++)
    {
        for(space = 1; space <= h; space++)
        {
            cout<<" ";
        }

        h--;

        for(i = 1; i <= rows; i++)
        {
            cout<<rows<<" ";
        }

        cout<<"\n";
    }
}