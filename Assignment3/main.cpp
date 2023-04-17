#include <iostream>

int main() {
    std::cout << "Welcome to the box calculator. Please type in length, width, and height information : " << std::endl;
    
    double length {}, width {}, height {};

    std::cout << "Length : ";
    std::cin >> length;

    std::cout << "Width : ";
    std::cin >> width;

    std::cout << "Height : ";
    std::cin >> height;

    double base_area = width * length;
    double volume = base_area * height;

    std::cout << "The base area is : " << base_area << std::endl;
    std::cout << "The volume is : " << volume << std::endl;
}