#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    home:
    cout<<"\nArea and Perimeter";
    cout<<"\n__________________"<< endl;
    int choice, choice2;
    float area, perimeter;
    cout<<"\nOf which shape do you want to find Area or Perimeter ?\n\n 1. Circle\n 2. Triangle\n 3. Rectangle\n 4. Square\n\nEnter Your Choice (1, 2, 3 and 4) : ";
    cin >> choice;

    if(choice == 1)
    {
        circle:
        cout<<"\nWhat do you want to find ?\n\n 1.Area\n 2.Perimeter\n 3.Return\n 4.Exit\n\nEnter your choice (1, 2, 3 and 4): ";
        cin >> choice2;
        if(choice2 == 1)
        {
            int radius;
            cout<<"\nEnter the value of Radius of Circle: ";
            cin >> radius;
            area = 3.14 * radius * radius;
            cout<<"\nArea = "<<area<<endl;
        }
        else if(choice2 == 2)
        {
            int radius;
            cout<<"\nEnter the value of Radius of Circle: ";
            cin >> radius;
            perimeter = 2 * 3.14 * radius;
            cout<<"\nPerimeter = "<< perimeter<<endl;
        }
        else if(choice2 == 3)
        {
            goto home;
        }
        else if(choice2 == 4)
        {
            exit(0);
        }
        else
        {
            cout<<"\nThis choice is wrong\nPress any key to continue: \n";
            getchar();
            goto circle;
        }
        
    }
    else if(choice == 2)
    {
        triangle:
        cout<<"\nWhat do you want to find ?\n\n 1.Area\n 2.Perimeter\n 3.Return\n 4.Exit\n\nEnter your choice (1, 2, 3 and 4):";
        cin >> choice2;
        if(choice2 == 1)
        {
            int base;
            int height;
            cout<<"\nEnter the value of the Base of Triangle: ";
            cin >> base;
            cout<<"\nEnter the value of the Height of Triangle: ";
            cin >> height;
            area = 0.5 * base * height;
            cout<<"\nArea = "<< area << endl;
        }
        else if(choice2 == 2)
        {
            int side1, side2, side3;
            cout<<"\nEnter the value of the 1st side: ";
            cin >> side1;
            cout<<"\nEnter the value of the 2nd side: ";
            cin >> side2;
            cout<<"\nEnter the value of the 3rd side: ";
            cin >> side3;
            perimeter = side1 + side2 + side3;
            cout<<"\nPerimeter = "<< perimeter << endl;
        }
        else if(choice2 == 3)
        {
            goto home;
        }
        else if(choice2 == 4)
        {
            exit(0);
        }
        else
        {
            cout<<"\nThis choice is wrong\nPress any key to continue: \n";
            getchar();
            goto triangle;
        }
    }
    else if(choice == 3)
    {
        rectangle:
        cout<<"\nWhat do you want to find ?\n\n 1.Area\n 2.Perimeter\n 3.Return\n 4.Exit\n\nEnter your choice (1, 2, 3 and 4):";
        cin >> choice2;
        if(choice2 == 1)
        {
            int length;
            int bredth;
            cout<<"\nEnter the value of Length of the Rectangle: ";
            cin >> length;
            cout<<"\nEnter the value of Bredth of the Rectangle: ";
            cin >> bredth;
            area = length * bredth;
            cout<<"\nArea = "<< area << endl;
        }
        else if(choice2 == 2)
        {
            int length;
            int bredth;
            cout<<"\nEnter the value of Length of the Rectangle: ";
            cin >> length;
            cout<<"\nEnter the value of Bredth of the Rectangle: ";
            cin >> bredth;
            perimeter = 2 * (length + bredth);
            cout<<"\nPerimeter = "<< perimeter << endl;
        }
        else if(choice2 == 3)
        {
            goto home;
        }
        else if(choice2 == 4)
        {
            exit(0);
        }
        else
        {
            cout<<"\nYour option is wrong\nPress any key to continue: \n";
            getchar();
            goto rectangle;
        }
        
    }
    else if(choice == 4)
    {
        square:
        cout<<"\nWhat do you want to find ?\n\n 1.Area\n 2.Perimeter\n 3.Return\n 4.Exit\n\nEnter your choice (1, 2, 3 and 4):";
        cin >> choice2;
        if(choice2 == 1)
        {
            int side;
            cout<<"\nEnter the value of Side of Square: ";
            cin >> side;
            area = side * side;
            cout<<"\nArea = "<< area << endl;
        }
        else if(choice2 == 2)
        {
            int side;
            cout<<"\nEnter the value of Side of Square: ";
            cin >> side;
            perimeter = 4 * side;
            cout<<"\nPerimeter = "<< perimeter << endl;
        }
        else if(choice2 == 3)
        {
            goto home;
        }
        else if(choice2 == 4)
        {
            exit(0);
        }
        else 
        {
            cout<<"\nYour option is wrong\nPress enter to continue: \n";
            getchar();
            goto square;
        }
    }
    return 0;
}