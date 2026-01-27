// lotto.cpp  -- probability of winning

#include <iostream>

long double probability(unsigned numbers, unsigned picks); // function prototype

int main()
{
    using namespace std;

    double total, choices;

    cout << "Enter the total number of choices on the game card and \n"
            "the number of picks allowed:\n";

    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices);
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }

    cout << "bye\n";

    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}

/*

--> why q terminate program?

Good question — this is a **classic C++ input-stream behavior** doubt 👍
The key point is: **`q` is not handled explicitly by your code**.
The program stops because of how **`cin` works internally**.

Let’s break it down step by step.

---

## 1️⃣ The critical line

```cpp
while ((cin >> total >> choices) && choices <= total)
```

This `while` condition has **two parts**:

1. `cin >> total >> choices`
2. `choices <= total`

If **either** becomes false → the loop ends.

---

## 2️⃣ What happens when you enter numbers

Example input:

```
49 6
```

* `cin >> total >> choices` ✔ succeeds
* `choices <= total` ✔ true
* Loop runs

---

## 3️⃣ What happens when you enter `q`

When you type:

```
q
```

C++ tries to do:

```cpp
cin >> total
```

But:

* `total` is a `double`
* `'q'` is **not a number**

👉 **Input extraction fails**

---

## 4️⃣ What “input extraction fails” means

When `cin` fails to read a value:

* `cin` enters a **fail state**
* `cin` becomes equivalent to `false` in boolean context

So this part becomes:

```cpp
(cin >> total >> choices)   // ❌ false
```

Therefore:

```cpp
while (false && choices <= total)
```

➡️ **Loop terminates immediately**

---

## 5️⃣ Why no crash happens?

Because C++ streams are **safe**:

* On failure, variables are **not modified**
* Control simply exits the loop
* Execution continues normally

Then this runs:

```cpp
cout << "bye\n";
```

---

## 6️⃣ Visual flow

```
User enters: q
      ↓
cin tries to read into double
      ↓
Conversion fails
      ↓
cin.fail() == true
      ↓
(cin >> total >> choices) == false
      ↓
while condition fails
      ↓
loop exits
      ↓
"bye" printed
```

---

## 7️⃣ Proof: checking stream state (extra clarity)

If you add this inside the loop condition:

```cpp
if (cin.fail())
    cout << "Input failed\n";
```

You’ll see it triggers when `q` is entered.

---

## 8️⃣ Important interview takeaway 🔥

> **`cin` can control program flow without explicitly checking characters.**

This is a **very common C++ pattern**:

```cpp
while (cin >> x)
{
     runs only while valid input is given
}
```

Used heavily in:

* Competitive programming
* File processing
* Stream-based parsers

---

## 9️⃣ One-line answer (exam/interview ready)

> The program terminates when `q` is entered because `cin` fails to convert `q` into a numeric type, causing the stream to enter a fail state, which makes the `while` condition false and exits the loop.

---

If you want, I can also explain:

* `cin.fail()`, `cin.bad()`, `cin.eof()` differences
* How to **recover** from a fail state
* How this behaves with files instead of keyboard input

Just say 👍



*/
