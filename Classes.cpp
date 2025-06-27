/*
 * File: Classes.cpp
 * Purpose: Demonstrates basic C++ class structure with private member variables,
 *          public methods, and proper encapsulation principles
 * Date: June 27, 2025
 */

#include <bits/stdc++.h> // Header file that includes most standard C++ libraries
using namespace std;     // Allows using standard library functions without std:: prefix

/**
 * Class: Solution
 * Purpose: A simple class that demonstrates basic OOP concepts in C++
 * Features:
 * - Private member variable for data encapsulation
 * - Public setter method to modify private data
 * - Demonstrates the use of 'this' pointer to resolve naming conflicts
 */
class Solution
{
private:
    int a = 0; // Private member variable - can only be accessed within the class
               // Initialized to 0 by default

public:
    /**
     * Method: setvalue
     * Purpose: Sets the value of the private member variable 'a'
     * Parameters:
     *   - int a: The new value to assign to the member variable
     * Returns: void (nothing)
     * Side effects: Prints the new value to console
     *
     * Note: Parameter name 'a' shadows the member variable 'a',
     *       so we use 'this->a' to refer to the member variable
     */
    void setvalue(int a)
    {
        this->a = a;       // 'this->a' refers to member variable, 'a' refers to parameter
        cout << a << endl; // Output the value to console for verification
        return;            // Explicit return (optional for void functions)
    }
};

/**
 * Function: main
 * Purpose: Entry point of the program - demonstrates usage of the Solution class
 * Returns: int (0 for successful execution)
 */
int main()
{
    Solution apple; // Create an instance (object) of the Solution class
                    // Object is named 'apple' - demonstrates that object names can be descriptive

    apple.setvalue(5); // Call the setvalue method on the 'apple' object
                       // This will set the private member 'a' to 5 and print it

    return 0; // Return 0 to indicate successful program execution
              // (This line is optional as main() returns 0 by default)
}