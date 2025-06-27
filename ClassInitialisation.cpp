/*
 * File: ClassInitialisation.cpp
 * Purpose: Demonstrates C++ constructor initialization list, pointer usage,
 *          and object creation techniques
 * Date: June 27, 2025
 */

#include <bits/stdc++.h> // Include standard C++ libraries
using namespace std;     // Use standard namespace

/**
 * Class: A
 * Purpose: Demonstrates constructor initialization list and member variable naming conventions
 * Features:
 * - Uses trailing underscore naming convention for private members
 * - Constructor with initialization list for efficient member initialization
 * - Public method to access private data
 */
class A
{
private:
    int age_;      // Private member: person's age (trailing underscore convention)
    int phone_;    // Private member: phone number
    string about_; // Private member: description/bio string

public:
    /**
     * Constructor: A
     * Purpose: Initializes all member variables using initialization list
     * Parameters:
     *   - int age: Age value to assign to age_
     *   - int phone: Phone number to assign to phone_
     *   - string about: Description string to assign to about_
     *
     * Note: Uses initialization list (: syntax) which is more efficient than
     *       assignment in constructor body, especially for complex types like string
     */
    A(int age, int phone, string about) : about_(about), age_(age), phone_(phone)
    {
        // Constructor body is empty because initialization list handles all assignments
        // This is the preferred way to initialize member variables in C++
    }

    /**
     * Method: getNumber
     * Purpose: Displays the phone number stored in the object
     * Returns: void
     * Side effects: Prints phone_ to console
     */
    void getNumber()
    {
        cout << phone_ << endl; // Output the private phone_ member to console
    }
};

/**
 * Function: main
 * Purpose: Demonstrates object creation, pointer usage, and pointer dereferencing
 * Returns: int (0 for successful execution)
 */
int main()
{
    // Pointer declaration - creates a pointer variable but doesn't allocate memory
    A *a1; // a1 is a pointer to an object of type A (currently uninitialized)

    // Object creation using parameterized constructor
    A a2(19, 1234, "I'm Mayukh"); // Creates object a2 on the stack with given values
                                  // Constructor initialization list will assign:
                                  // age_ = 19, phone_ = 1234, about_ = "I'm Mayukh"

    // Pointer assignment - make a1 point to the address of a2
    a1 = &a2; // a1 now points to the memory location where a2 is stored
              // &a2 gets the address of object a2

    // Method call through pointer dereferencing
    (*a1).getNumber(); // Dereference pointer a1 to access the object it points to
                       // (*a1) gives us the object, then we call getNumber() on it
                       // Alternative syntax: a1->getNumber() would do the same thing
                       // This will print: 1234

    return 0; // Program executed successfully
}