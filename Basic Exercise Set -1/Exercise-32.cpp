#include <iostream> // Including input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    signed long num1 = 0; // Declaring and initializing a signed long variable num1 to zero

    cout << "\n\n Check whether a number is positive, negative or zero :\n"; // Outputting a message indicating the purpose of the program
    cout << "-----------------------------------------------------------\n"; // Outputting a separator line

    cout << " Input a number : "; // Prompting the user to input a number
    cin >> num1; // Taking input for the variable num1 from the user

    if (num1 > 0) // Checking if the entered number is greater than zero
    {
        cout << " The entered number is positive.\n\n"; // Outputting a message if the number is positive
    }
    else if (num1 < 0) // Checking if the entered number is less than zero
    {
        cout << " The entered number is negative.\n\n"; // Outputting a message if the number is negative
    }
    else // Handling the case where the entered number is zero
    {
        std::cout << " The number is zero.\n\n"; // Outputting a message if the number is zero
    }

    return 0; // Returning 0 to indicate successful program execution
}; // End of the main function
