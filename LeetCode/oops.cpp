#include <iostream>
// #include <string>
// #include <bits/stdc++.h>

class BankAccount
{
    double balance;

public:
    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        balance -= amount;
    }
};

class Student
{
public:
    std::string name;
    int age;

    void study()
    {
        std::cout << name << " is studying";
    }
};

int main()
{
    Student v;

    BankAccount Acct;
    Acct.balance;

    className

        v.age = 12;
    v.name = "vikas";
    v.study();

    return 0;
}
