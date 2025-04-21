#include <iostream>
using namespace std;
template <typename T>
int binarySearch(T list[], T key, int listSize) {
    int low = 0;
    int high = listSize - 1;

    while (high >= low) {
        int mid = (low + high) / 2;

        if (key < list[mid]){
            high = mid - 1;
        }else if (key == list[mid]){
            return mid;
        }else{
            low = mid + 1;
        }
    }

    return -low - 1;
}

int main() {

    int listInts[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int listSizeInts = sizeof(listInts) / sizeof(listInts[0]);

    int keyInt = 5;

    int resultInt = binarySearch(listInts, keyInt, listSizeInts);
    if (resultInt >= 0){
        cout << "Found " << keyInt << " at index " << resultInt << endl;
}else{
        cout << keyInt << " not found. Insertion point: " << -resultInt - 1 << endl;
}

double listDouble[] = {1.3, 2.9, 3.5, 4, 5, 6, 7.8, 8.1, 9};
    int listSizeDouble = sizeof(listDouble) / sizeof(listDouble[0]);

    double keyDouble = 7.9;

    int resultDouble = binarySearch(listDouble, keyDouble, listSizeDouble);
    if (resultDouble >= 0){
        cout << "Found " << keyDouble << " at index " << resultDouble << endl;
}else{
        cout << keyDouble << " not found. Insertion point: " << -resultDouble - 1 << endl;
}

    string listString[] = {"apple", "banana", "cherry", "date", "fig", "grape", "kiwi", "lemon", "mango"};
    int listSizeString = sizeof(listString) / sizeof(listString[0]);
    string keyString = "steven";
    int resultString = binarySearch(listString, keyString, listSizeString);
    if (resultString >= 0){
        cout << "Found " << keyString << " at index " << resultString << endl;
} else{
        cout << keyString << " not found. Insertion point: " << -resultString - 1 << endl;
}


    
    return 0;
}