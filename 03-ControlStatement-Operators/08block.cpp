// The block consist of paired braces and the statements they enclose and for the purpose of syntax, counts s single statement

// below program uses braces to combine three separate statements into single block.

// block.cpp -- use a block statement

#include <iostream>

int main()
{
    using namespace std;

    cout << "The Amazing Account will sum and average ";
    cout << "five numbers for you.\n";
    cout << "Please enter five values: \n";
    double number;
    double sum = 0.0;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }

    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Accounto bids you aideu!\n";

    return 0;
}
