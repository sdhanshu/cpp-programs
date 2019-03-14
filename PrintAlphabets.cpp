#include<iostream>
using namespace std;

int main()
{
    cout<<"\nPrint Alphabets";
    cout<<"\n~~~~~~~~~~~~~~~";
    int choice;
    cout<<"\nWhat type of Alphabets do you want?\n\n 1. Capital\n 2. Small \n Enter Your choice (1 or 2): ";
    cin>>choice;

    if(choice == 1)
    {
        for(char i = 'A'; i <= 'Z';i++)
        {
            cout<<i<<endl;
        }
        
    }
    else if (choice == 2)
    {
        for(char i = 'a'; i <= 'z';i++)
        {
            cout<<i<<endl;
        }
    }
    else 
    {
        cout<<"\nThis is a wrong choice\n";
        cout<<"\nChoose only between 1 and 2\n"<<endl;
    }
    return 0;
}