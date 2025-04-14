#include <iostream>
#include <string>
#include <stdexcept>
#include <cctype>
using namespace std;


int hex2Dec(const string& hexString) {
    int decimalValue = 0;
    int base = 1;
    string hexUpper = hexString;
    for (char& c : hexUpper) {
        c = toupper(c);
    }

    for (int i = hexUpper.length() - 1; i >= 0; --i) {
        char currentChar = hexUpper[i];

        if(currentChar >= '0' && currentChar <= '9') {
            decimalValue += (currentChar - '0') * base;
        } else if (currentChar >= 'A' && currentChar <= 'F') {
            decimalValue += (currentChar - 'A' + 10) * base;
        } else {
            throw invalid_argument("Invalid hexadecimal character: " + string(1, currentChar));
        }

        base *= 16;
    }

    return decimalValue;
}

int main() {

    string hexString;
    cout << "Enter a hexadecimal number: ";
    cin >> hexString;

    try {
        int decimalValue = hex2Dec(hexString);
        cout << "Decimal value: " << decimalValue << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }


    
    return 0;
}