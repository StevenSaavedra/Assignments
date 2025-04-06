#include <iostream>
using namespace std; 
#include <fstream>
int main() {

    ofstream file;

    file.open("C:\\Users\\potos\\OneDrive\\Desktop\\programming 2\\MidTerm.txt");

    if (file.fail()) {
        cout << "Error opening file" << endl;
        return 1;
    } else {
        cout << "File opened successfully" << endl;
    }

    file << "This is a test to count the number of characters in a file.";

    file.close();

    ifstream fileRead;
    fileRead.open("C:\\Users\\potos\\OneDrive\\Desktop\\programming 2\\MidTerm.txt");
    char ch;
    int i=0;

    while(fileRead.get(ch)) {
        cout << ch;
        i++;
    }

    cout << "The number of characters in the file is: " << i << endl;

    fileRead.close();
    cout << "File closed successfully" << endl;
    return 0;
}