#include <iostream>
using namespace std;

int main() {
    
double a[3][4];
double sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout <<"Enter number in: " << i << "," << j << ": ";
            cin >> a[i][j];

        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j]<<" "<< endl;
        }

    }

    for (int i = 0; i < 4; i++) {
        
        for(int j = 0; j<3;j++){

            sum = a[j][i] + sum;



        }


        cout << "Sum of column " << i << " is: " << sum << endl;
        sum = 0;
    }

    return 0;
}