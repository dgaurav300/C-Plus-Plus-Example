#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    float kel, cel; // Declaring floating-point variables for Kelvin and Celsius temperatures

    cout << "\n\n Convert temperature in Celsius to Kelvin :\n"; // Outputting a message indicating temperature conversion
    cout << "---------------------------------------------------\n"; // Outputting a separator line

    cout << " Input the temperature in Celsius : "; // Prompting the user to input the temperature in Celsius
    cin >> cel; // Taking input for the temperature in Celsius from the user

    kel = cel + 273.15; // Converting Celsius to Kelvin by adding the Celsius temperature to 273.15 (absolute zero in Celsius)

    cout << " The temperature in Celsius : " << cel << endl; // Displaying the input temperature in Celsius
    cout << " The temperature in Kelvin : " << kel << endl; // Displaying the converted temperature in Kelvin
    cout << endl; // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
}; // End of the main function
