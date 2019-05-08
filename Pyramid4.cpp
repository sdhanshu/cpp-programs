#include<iostream>

using namespace std;

int main()
{
    int rows, height, space, h, i, value = 1;
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
            cout<<value<<" ";
            value++;
        }
        cout<<"\n";
    }
}