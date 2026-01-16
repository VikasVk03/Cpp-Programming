// The Switch Statement

/*

-> The general form:

    switch(integer-expression)
    {
        case label1: statement(s)
        case label2: statement(s)

        ...

        default: statement(s)
    }


-> Note:
    1. after a program jumps to a particular line in a switch, it then sequentially executes all the statements following that line in the switch unless explicitly directs it.
    To make execution stop at the end of particular group of statements, use the break statement.
*/

// switch.cpp  -- using the switch statement

#include <iostream>

using namespace std;

// function prototype
void showmenu();
void report();
void comfort();

int main()
{
    showmenu();

    int choice;
    cin >> choice;

    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            cout << "alarm\a\n";
            break;
        case 2:
            report();
            break;
        case 3:
            cout << "The boss was in all day.\n";
            break;
        case 4:
            comfort();
            break;
        default:
            cout << "That's not a choice.\n";
        }

        showmenu();
        cin >> choice;
    }

    cout << "Bye!\n";
    return 0;
}

void showmenu()
{
    cout << "Please enter 1,2,3,4 or 5:\n"
            "1) alarm            2) report\n"
            "3) alibi            4) comfort\n"
            "5) quit\n";
}

void report()
{
    cout << "It's been an excellent week for business.\n"
            "Sales are up 120%. Expenses are down 35%.\n";
}

void comfort()
{
    cout << "Your employees think you are the finest CEO\n"
            "in the industry. The board of directors think\n"
            "you are the finest CEO in the industry.\n";
}
