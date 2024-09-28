#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    float kel, frh; // Declaring floating-point variables for Kelvin and Fahrenheit temperatures

    cout << "\n\n Convert temperature in Kelvin to Fahrenheit :\n"; // Outputting a message indicating temperature conversion
    cout << "---------------------------------------------------\n"; // Outputting a separator line

    cout << " Input the temperature in Kelvin : "; // Prompting the user to input the temperature in Kelvin
    cin >> kel; // Taking input for the temperature in Kelvin from the user

    frh = (9.0 / 5) * (kel - 273.15) + 32; // Converting Kelvin to Fahrenheit using the conversion formula

    cout << " The temperature in Kelvin    : " << kel << endl; // Displaying the input temperature in Kelvin
    cout << " The temperature in Fahrenheit : " << frh << endl; // Displaying the converted temperature in Fahrenheit
    cout << endl; // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
}; // End of the main function

