/*
 * File: Inheritance.cpp
 * Purpose: Demonstrates C++ inheritance concepts including base class constructors,
 *          derived class implementation, and proper inheritance syntax
 * Date: June 28, 2025
 */

#include <bits/stdc++.h> // Include standard C++ libraries
using namespace std;     // Use standard namespace

/**
 * Base Class: A
 * Purpose: Serves as the parent class demonstrating basic encapsulation
 * Features:
 * - Private member variables with trailing underscore convention
 * - Parameterized constructor with initialization list
 * - Public method for accessing private data
 */
class A
{
private:
    int age_;      // Private member: person's age
    int phone_;    // Private member: phone number
    string about_; // Private member: description/bio string

public:
    /**
     * Constructor: A
     * Purpose: Initializes all member variables of the base class
     * Parameters:
     *   - int age: Age value to assign to age_
     *   - int phone: Phone number to assign to phone_
     *   - string about: Description string to assign to about_
     *
     * Note: This class has NO default constructor, so derived classes
     *       must explicitly call this constructor
     */
    A(int age, int phone, string about) : about_(about), age_(age), phone_(phone)
    {
        cout << "Base class A constructor called" << endl;
    }

    /**
     * Method: getNumber
     * Purpose: Displays the phone number stored in the object
     * Returns: void
     * Side effects: Prints phone_ to console
     */
    void getNumber()
    {
        cout << "Phone: " << phone_ << endl;
    }

    /**
     * Method: getAge
     * Purpose: Returns the age stored in the object
     * Returns: int - the age value
     */
    int getAge() const
    {
        return age_;
    }

    /**
     * Method: getAbout
     * Purpose: Returns the about string stored in the object
     * Returns: string - the about description
     */
    string getAbout() const
    {
        return about_;
    }
};

/**
 * Derived Class: B
 * Purpose: Inherits from class A and extends its functionality
 * Inheritance: public inheritance from class A
 * Features:
 * - Inherits all public and protected members from A
 * - Must call parent constructor explicitly
 * - Can add its own members and methods
 */
class B : public A
{
private:
    string specialty_; // Additional member specific to class B

public:
    /**
     * Constructor: B
     * Purpose: Initializes both base class and derived class members
     * Parameters:
     *   - int age: Passed to base class constructor
     *   - int phone: Passed to base class constructor
     *   - string about: Passed to base class constructor
     *   - string specialty: New member specific to class B
     *
     * Note: Must call A(age, phone, about) to initialize base class
     *       because A doesn't have a default constructor
     */
    B(int age, int phone, string about, string specialty)
        : A(age, phone, about), specialty_(specialty) // Call base constructor first
    {
        cout << "Derived class B constructor called" << endl;
    }

    /**
     * Method: getSpecialty
     * Purpose: Returns the specialty specific to class B
     * Returns: string - the specialty description
     */
    string getSpecialty() const
    {
        return specialty_;
    }

    /**
     * Method: displayInfo
     * Purpose: Displays all information including inherited and new members
     * Demonstrates how derived class can use base class methods
     */
    void displayInfo()
    {
        cout << "=== Person Information ===" << endl;
        cout << "Age: " << getAge() << endl;         // Using inherited method
        getNumber();                                 // Using inherited method
        cout << "About: " << getAbout() << endl;     // Using inherited method
        cout << "Specialty: " << specialty_ << endl; // Using own member
        cout << "=========================" << endl;
    }
};

/**
 * Function: main
 * Purpose: Demonstrates inheritance by creating objects of both base and derived classes
 * Returns: int (0 for successful execution)
 */
int main()
{
    cout << "=== Creating Base Class Object ===" << endl;
    // Create an object of base class A
    A person1(25, 1234567890, "Software Engineer");
    person1.getNumber();
    cout << endl;

    cout << "=== Creating Derived Class Object ===" << endl;
    // Create an object of derived class B
    // Note: B constructor calls A constructor automatically
    B person2(30, 9876543210, "Senior Developer", "Machine Learning");

    cout << "\n=== Using Inherited Methods ===" << endl;
    person2.getNumber();                         // Inherited from A
    cout << "Age: " << person2.getAge() << endl; // Inherited from A

    cout << "\n=== Using Derived Class Method ===" << endl;
    cout << "Specialty: " << person2.getSpecialty() << endl; // Specific to B

    cout << "\n=== Complete Information Display ===" << endl;
    person2.displayInfo(); // Method specific to B that uses inherited methods

    return 0; // Program executed successfully
}