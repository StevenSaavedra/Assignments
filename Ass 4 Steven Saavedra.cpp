#include <iostream>
#include <fstream>
using namespace std;
#include <array>


int main() {
    int integer;
    ofstream file;

    file.open("C:\\Users\\potos\\OneDrive\\Desktop\\programming 2\\integers.txt");
    if (file.fail()) {
        cout << "Error opening file" << endl;
        return 1;
    } else {
        cout << "File opened successfully" << endl;
    }

    for(int i = 0; i < 100; i++) {
        integer = rand()%100;
        file << integer << " ";
    }

    file.close();
    cout << "File closed successfully" << endl;
    ifstream fileRead;
    fileRead.open("C:\\Users\\potos\\OneDrive\\Desktop\\programming 2\\integers.txt");
    int a[100];
    if (fileRead.fail()) {
        cout << "Error opening file" << endl;
        return 1;
    } else {
        cout << "File opened successfully" << endl;
    }
    

    for(int i = 0; i < 100; i++) {
        fileRead >> integer;
        a[i] = integer;
        cout << integer << " ";
    }

    cout << endl;
    cout << endl;

    fileRead.close();
      int temp;
      for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    file.open("C:\\Users\\potos\\OneDrive\\Desktop\\programming 2\\integers.txt");

    for(int i = 0; i < 100; i++) {

        file << a[i] << " ";
    }

    file.close();

    fileRead.open("C:\\Users\\potos\\OneDrive\\Desktop\\programming 2\\integers.txt");

    for(int i = 0; i < 100; i++) {
        fileRead >> integer;
        cout << integer << " ";
    }

    fileRead.close();
    cout << "File closed successfully" << endl;

    return 0;
}