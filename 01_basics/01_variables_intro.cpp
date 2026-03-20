// Question 1 b - Level: Beginner
//
// Write a C++ program that:
// 1. Declares an integer variable and stores your age in it
// 2. Declares a float variable and stores your CGPA in it
// 3. Declares a char variable and stores the first letter of your name
// 4. Prints all three values using cout
//
// Expected Output:
// Age: 19
// CGPA: 8.5
// First letter: A


#include <iostream>
using namespace std;

int main() {
    int age = 19;
    float cgpa = 8.9;
    char firstName = 'A';

    cout << "Age: " << age << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "First letter: " << firstName << endl;

    return 0;
}
