#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "------------ Decrypt d 1.0 An decrypter ------------\n";
    string encryptedString;
    getline(cin, encryptedString);
    
    // Remove leading "0x " and trailing " /0"
    encryptedString = encryptedString.substr(3, encryptedString.size() - 6);
    
    // Split the string by spaces
    stringstream ss(encryptedString);
    string hex;
    string decryptedString;
    
    while (ss >> hex) {
        // Convert hex string to character
        char c = 0;
        for (size_t i = 0; i < hex.size(); ++i) {
            c *= 16;
            if (hex[i] >= '0' && hex[i] <= '9') c += hex[i] - '0';
            else if (hex[i] >= 'A' && hex[i] <= 'F') c += hex[i] - 'A' + 10;
        }
        decryptedString += c;
    }
    system("cls");
    cout << "------------ Decrypt d 1.0 An decrypter ------------\n";
    cout << decryptedString << endl;
    while(1){
		
	}
    return 0;
}
