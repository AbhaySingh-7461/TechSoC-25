# include <iostream>
using namespace std;

int main() {
    int input;
    cout << "======Caeser Cipher======" << endl;
    cout << "To Encode a message : 1\n";
    cout << "To Decode a message : 2\n";
    cout << "Which one do you wish to use : ";
    cin >> input;
    cin.ignore();

    if (input == 1 || input == 2) {
        char ar[100];
        cout << "Please enter the line: ";
        cin.getline(ar , 100);

        if (input == 1 ) {
            for (int i = 0; ar[i] != '\0'; i++) {
                if (ar[i] >= ('x') && ar[i] <= 'z') {
                    ar[i] -= 23;
                } else if (ar[i] >= ('X') && ar[i] <= 'Z') {
                    ar[i] -=23;
                } else if (ar[i] >= 'a' && ar[i] < ('x')) {
                    ar[i] += 3;
                } else if (ar[i] >= 'A' && ar[i] < ('X')) {
                    ar[i] += 3;
                }
                cout << ar[i];
            }
        }
        else if (input == 2) {
            for (int i = 0; ar[i] != '\0'; i++) {
                if (ar[i] >= 'a' && ar[i] <= ('c')) {
                    ar[i] += 23;
                } else if (ar[i] >= 'A' && ar[i] <= ('C')) {
                    ar[i] += 23;
                } else if (ar[i] > ('c') && ar[i] <= 'z') {
                    ar[i] -= 3;
                } else if (ar[i] > ('C') && ar[i] <= 'Z') {
                    ar[i] -= 3;
                }
                cout << "Result : " << ar[i];
            }
        }
        else {
        }
    } else {
        cout << "Error!" << endl;
    }

    return 0;
}
