#include<bits/stdc++.h> // Include the standard C++ library header

using namespace std;

int main() {
    cout << "------------ Encrypt d 1.0 An encrypter ------------\n"; // Print a welcome message

    string s; // Declare a string variable to store user input text
    string a[16] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"}; // Declare a string array to convert characters to hexadecimal digits
    getline(cin, s); // Get a line of text from the standard input stream and store it in the string variable s

    string b; // Declare a string variable to store the encrypted text
    string g; // Declare a string variable to store intermediate conversion results
    string d = "0x "; // Declare a string variable to store the encrypted hexadecimal text, initialized to "0x "

    for(int i = 0; i < s.size(); i++) { // Iterate through each character of the user input text
        g = "";
        char c;
        c = s[i];
        int f;
        f = c;
        while(f != 0) { // Convert the character to hexadecimal number
            g += a[f % 16];
            f /= 16;
        }
        reverse(g.begin(), g.end()); // Reverse the character order in the string g to obtain the correct hexadecimal number
        d += g; // Add the converted hexadecimal number to the encrypted text
        d += " "; // Add a space separator
    }
    d += "/0"; // Add the end marker "/0" to the encrypted text

    system("cls"); // Clear the console window

    cout << "------------ Encrypt d 1.0 An encrypter ------------\n"; // Print a welcome message
    cout << d; // Print the encrypted text

    while(1) { // Infinite loop to keep the program running
        // Here you can add other operations or do nothing until the user manually closes the program
    }

    return 0;
}
