// calling.cpp  -- defining, prototype, and calling a function

#include <iostream> // #include makes library function prototype available in file.

void simple(); // function prototype

int main()
{
    using namespace std;

    cout << "main() will call the simple() function:\n";
    simple(); // function call

    cout << "main() is finished with the simple() function.\n";

    return 0;
}

// function definition
void simple()
{
    using namespace std;
    cout << "I'm but a simple function.\n";
}

/*
-> Defining a Function

  typeName functionName(parameterList)
  {
    statements;
    return value;  // value is type cast to type typeName
  }

  A function with a return value produces a value that it returns to the function that called it.

  Note: C++ places a restriction on what type you can use for a return value: The return value cannot be an array. Everything else is possible -- integers, floating-point numbers, pointers and even structures and objects!
  Interestingly, even though a C++ function can't return an array directly, it can return an array tht's part of stucture or object.

  -> A function terminates after executing return statement.

*/