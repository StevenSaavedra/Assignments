#include <iostream>
using namespace std;

template <typename T>
int LinearSearch(T arr[], T key, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {

    int listInt[] = {1, 4, 4, 2, 5, -3, 6, 2};
    int indexInt = LinearSearch(listInt, 3, size(listInt));
    if (indexInt != -1) {
        cout << "Found at index: " << indexInt << endl;
    } else {
        cout << "Not found" << endl;
    }
    double listDouble[] = {1.1, 2, 3.5, 4.9, 5};
    int sizeDouble = sizeof(listDouble) / sizeof(listDouble[0]);
    double keyDouble = 3.5;
    int indexDouble = LinearSearch(listDouble, keyDouble, sizeDouble);
    
    if (indexDouble != -1) {
        cout << keyDouble << " Found at index: " << indexDouble << endl;
    } else {
        cout << "Not found" << endl;
    }
    string listString[] = {"hello", "steven", "naruto", "there"};
    int sizeString = sizeof(listString) / sizeof(listString[0]);
    string key = "naruto";

    int indexString = LinearSearch(listString, key, sizeString);
    if (indexString != -1) {
        cout << key << " Found at index: " << indexString << endl;
    } else {
        cout << "Not found" << endl;
    }



    return 0;
}