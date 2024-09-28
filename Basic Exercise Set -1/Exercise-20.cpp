#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    float frh, cel; // Declaring floating-point variables for Fahrenheit and Celsius temperatures

    cout << "\n\n Convert temperature in Celsius to Fahrenheit :\n"; // Outputting a message indicating temperature conversion
    cout << "---------------------------------------------------\n"; // Outputting a separator line

    cout << " Input the temperature in Celsius : "; // Prompting the user to input the temperature in Celsius
    cin >> cel; // Taking input for the Celsius temperature from the user

    frh = (cel * 9.0) / 5.0 + 32; // Converting Celsius to Fahrenheit using the formula: (Celsius * 9/5) + 32

    cout << " The temperature in Celsius    : " << cel << endl; // Displaying the input temperature in Celsius
    cout << " The temperature in Fahrenheit : " << frh << endl; // Displaying the converted temperature in Fahrenheit
    cout << endl; // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
}; // End of the main function
