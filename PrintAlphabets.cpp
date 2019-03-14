#include<iostream>
using namespace std;

int main()
{
    cout<<"\nPrint Alphabets";
    cout<<"\n~~~~~~~~~~~~~~~";
    char alphabet;
    cout<<"\nWhat type of Alphabets do you want ? Capital or Small : ";
    cin>>alphabet;

    if(alphabet == 'c')
    {
        for(char i = 'A'; i <= 'Z';i++)
        {
            cout<<i<<endl;
        }
        
    }
    else if(alphabet == 'C')
    {
       for(char i = 'A'; i <= 'Z';i++)
        {
            cout<<i<<endl;
        }

    }
    else if (alphabet == 'S')
    {
        for(char i = 'a'; i <= 'z';i++)
        {
            cout<<i<<endl;
        }

    }
    else if (alphabet == 's')
    {
        for(char i = 'a'; i <= 'z';i++)
        {
            cout<<i<<endl;
        }
    }
    else 
    {
        cout<<"\nThis is a wrong type of Alphabet\n";
        cout<<"\nChoose only between Capital and Small\n"<<endl;
    }
    return 0;
}