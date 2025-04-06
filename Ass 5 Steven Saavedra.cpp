#include <iostream>
using namespace std;

template <typename T>
T findMax(T arr[], int size) {
    T max = arr[0];
    for (int i = 0; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {

    int size;
    cout << "Enter the size of the array: "<< endl;
    cin >> size;

    int* a = new int[size];
    double* d = new double[size];
    string * s = new string[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter an int : " << endl;
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a decimal value: " << endl;
        cin >> d[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a text: " << endl;
        cin >> s[i];
    }

    cout << "The maximum int is: " << findMax(a, size) << endl;
    cout << "The maximum double is: " << findMax(d, size) << endl;
    cout << "The maximum string is: " << findMax(s, size) << endl;

    delete[] a;
    delete[] d;
    delete[] s;

    

    


    



    







return 0;

}