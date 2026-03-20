// Question 2 — Level: Beginner
//
// Write a C++ program that:
// 1. Takes two integers as input from the user using cin
// 2. Prints their sum, difference, product, and quotient
//
// Expected Output:
// Enter two numbers: 10 3
// Sum: 13
// Difference: 7
// Product: 30
// Quotient: 3
//
// Rule: Use only main() — no classes, no functions, no shortcuts.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    double sum, diff, pro, quo;

    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;

    cout<<"Addition = "<<a+b<<endl;
    cout<<"Subtration = "<<a-b<<endl;
    cout<<"Multiplication = "<<a*b<<endl;
    cout<<"Quotient = "<<a/b<<endl;

    return 0;
}

