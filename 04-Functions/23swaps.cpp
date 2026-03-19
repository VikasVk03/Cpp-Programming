// Reference as Function Parameters

// swaps.cpp  -- swapping with reference and with pointers

#include <iostream>

void swapr(int &a, int &b); // a,  b are aliases for ints
void swapp(int *p, int *q); // p,q are addresses of ints
void swapv(int a, int b);   // a, b are new variables

int main()
{
    using namespace std;

    int wallet1 = 300;
    int wallet2 = 350;

    cout << "Wallet1 = $" << wallet1;
    cout << " Wallet2 = $" << wallet2 << endl;

    cout << "\nUsing reference to swap contents: \n";
    swapr(wallet1, wallet2);
    cout << "Wallet1 = $" << wallet1;
    cout << " Wallet2 = $" << wallet2 << endl;

    cout << "\nUsing pointers to swap contents again: \n";
    swapp(&wallet1, &wallet2); // pass address of variables
    cout << "Wallet1 = $" << wallet1;
    cout << " Wallet2 = $" << wallet2 << endl;

    cout << "\nTrying to use passing by value: \n";
    swapv(wallet1, wallet2); // pass values of variables
    cout << "Wallet1 = $" << wallet1;
    cout << " Wallet2 = $" << wallet2 << endl;

    return 0;
}

void swapr(int &a, int &b) // use reference
{
    int temp;

    // use a, b for values of variables
    temp = a;
    a = b;
    b = temp;
}

void swapp(int *p, int *q) // use pointers
{
    int temp;

    // use *p, *q for values of variables
    temp = *p;
    *p = *q;
    *q = temp;
}

void swapv(int a, int b) // try using values
{
    int temp;

    // use a, b for values of variables
    temp = a;
    a = b;
    b = temp;
}
