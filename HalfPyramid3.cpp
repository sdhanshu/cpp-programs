#include <iostream>

using namespace std;

int main()
{
    char height;
    cout<<"\nEnter the Alphabet till you want your Pyramid: ";
    cin>> height;
    for(char i = 'A'; i <= height; i++)
    {
        for(char j = 'A'; j <= i; j++)
        {
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}