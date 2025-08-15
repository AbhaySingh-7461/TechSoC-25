#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to perform Caesar Cipher
string caesarCipher(const string &text, int shift, bool encode) {
    string result = "";

    // If decoding, reverse the shift
    if (!encode) {
        shift = -shift;
    }

    for (char ch : text) {
        if (isalpha(ch)) { // Only shift letters
            char base = isupper(ch) ? 'A' : 'a';
            result += char((ch - base + shift + 26) % 26 + base);
        } else {
            result += ch; // Leave non-letters unchanged
        }
    }

    return result;
}

int main() {
    int choice, shift;
    string message;

    cout << "===== Caesar Cipher =====\n";
    cout << "1. Encode a message\n";
    cout << "2. Decode a message\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Validate choice
    if (choice != 1 && choice != 2) {
        cout << "Invalid choice. Exiting...\n";
        return 1;
    }

    cout << "Enter shift amount (1-25): ";
    cin >> shift;

    // Keep shift in range
    shift %= 26;

    cin.ignore(); // Clear input buffer
    cout << "Enter your message: ";
    getline(cin, message);

    bool encode = (choice == 1);
    string output = caesarCipher(message, shift, encode);

    cout << "\nResult: " << output << "\n";

    return 0;
}
