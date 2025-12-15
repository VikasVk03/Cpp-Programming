// WAP that uses 3 user defined function (counting main() as one) and produces the following output
// three blind mice
// three blind mice
// see how they run
// see how they run
// one function called two times should produce the first two lines and the remaining function also called twice should produce the remaining output

#include <iostream>
void mice();
void run();
int main()
{
    mice();
    mice();
    run();
    run();
    return 0;
}

void mice()
{
    using namespace std;
    cout << "Three blind mice" << endl;
}

void run()
{
    using namespace std;
    cout << "see how they run" << endl;
}