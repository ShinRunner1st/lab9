/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    int age, height, bounty, charater;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25)
    {
        cout << "Enter your height: ";
        cin >> height;
        if(height < 100)
        {
            charater = 4;
        }
        else if(height < 180)
        {
            charater = 3;
        }
        else
        {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 1100000000)
            {
                charater = 1;
            }
            else
            {
                charater = 2;
            }
        }
    }
    else
    {
        if(age <= 60)
        {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 500000000)
            {
                charater = 7;
            }
            else
            {
                charater = 5;
            }
        }
        else
        {
            charater = 6;
        }
    }
    cout << "Your character = ";
    switch(charater)
    {
    case 1 :
        cout << "Zoro";
        break;
    case 2 :
        cout << "Sanji";
        break;
    case 3 :
        cout << "Usopp";
        break;
    case 4 :
        cout << "Chopper";
        break;
    case 5 :
        cout << "Franky";
        break;
    case 6:
        cout << "Brook";
        break;
    case 7 :
        cout << "Jinbe";
        break;
    }

	return 0;
}