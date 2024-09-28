#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    float kmph, miph; // Declaring floating-point variables for kilometers per hour and miles per hour

    cout << "\n\n Convert kilometers per hour to miles per hour :\n"; // Outputting a message indicating unit conversion
    cout << "----------------------------------------------------\n"; // Outputting a separator line

    cout << " Input the distance in kilometer : "; // Prompting the user to input the distance in kilometers
    cin >> kmph; // Taking input for kilometers per hour from the user

    miph = (kmph * 0.6213712); // Converting kilometers per hour to miles per hour using the conversion factor

    cout << " The " << kmph << " Km./hr. means " << miph << " Miles/hr." << endl; // Displaying the converted value in miles per hour
    cout << endl; // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
}; // End of the main function
