#include <iostream>

using namespace std;

int main()
{
    int height;
    cout<<"\nHow much Height do you want for your Inverted Half Pyramid ? ";
    cin>> height;
    for(int i = height; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}