#include <iostream>

int main() {

    double celsiusInp { };

    std::cout << "Enter a temperature in Celsius: ";
    std::cin >> celsiusInp;

    double fahrenheit = (9.0 / 5) * celsiusInp + 32;

    std::cout << celsiusInp << " Celsius is " << fahrenheit << " Fahrenheit" << std::endl;
    return 0;
}