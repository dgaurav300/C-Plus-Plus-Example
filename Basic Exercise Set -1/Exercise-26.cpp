#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    float kel, frh; // Declaring floating-point variables for Kelvin and Fahrenheit temperatures

    cout << "\n\n Convert temperature in Fahrenheit to Kelvin :\n"; // Outputting a message indicating temperature conversion
    cout << "---------------------------------------------------\n"; // Outputting a separator line

    cout << " Input the temperature in Fahrenheit : "; // Prompting the user to input the temperature in Fahrenheit
    cin >> frh; // Taking input for the temperature in Fahrenheit from the user

    kel = (5.0 / 9) * (frh - 32) + 273.15; // Converting Fahrenheit to Kelvin using the conversion formula

    cout << " The temperature in Fahrenheit : " << frh << endl; // Displaying the input temperature in Fahrenheit
    cout << " The temperature in Kelvin : " << kel << endl; // Displaying the converted temperature in Kelvin
    cout << endl; // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
}; // End of the main function
