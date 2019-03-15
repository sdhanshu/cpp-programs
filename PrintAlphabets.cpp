#include<iostream>
using namespace std;

int main()
{
    do{
        cout<<"\nPrint Alphabets";
        cout<<"\n~~~~~~~~~~~~~~~";
        int choice;
        cout<<"\nWhat type of Alphabets do you want?\n\n 1. Capital\n 2. Small \n 3. Exit \n Enter Your choice (1, 2 or 3): ";
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
            cout<<"\nChoose only between 1, 2 and 3\n"<<endl;
        }
        cout<<"Do you want to try again? 1. Yes   2. No \n Enter your Choice: ";
        cin>>choice;
    }while(choice == 1);
    return 0;
}