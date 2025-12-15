// ourFunc.cpp  -- defining your own function

#include <iostream>

// in this program we declare using directive in each of two function: main() and simon(), this is because each function uses cout and thus needs access to the cout definition from the std namespace.
// we can make the std namespace available to both functions by declaring using directive outside above both function that is in global scope.
// using namespace std;
// the current prevalent philosophy is that it's preferable to be more discriminating and limit access to the std namespace to only those functions that need access. for example in 06convert.cpp only main() uses cout, so there is no need to make the std namespace available to the stoneToLb() function.
void simon(int); // function prototype for simon()

int main()
{
    using namespace std;
    simon(3); // call the simon() function
    int m;
    // m = simon(7);  // not allowed for void function
    // cout << m << endl;
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count); // call it again
    cout << "Done!" << endl;
    return 0;
}

void simon(int n) // define the simon() function
{
    using namespace std;
    cout << "Simon say touch your toes " << n << " times." << endl;
    // void functions don't need return statement
}
