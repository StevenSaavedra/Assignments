#include <iostream>

int main() {
    double celcius, farhenheit;

    std::cout << "Enter temperature in celsius: " << std::endl;
    std::cin >> celcius;

    farhenheit = (9.0/5.0)*celcius + 32.0;

    std::cout << "Temperature in fahrenheit: " << farhenheit << std::endl;
    return 0;
}