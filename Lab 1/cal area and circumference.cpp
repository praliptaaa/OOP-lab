write a program to input radius of circle and calculate its area and circumferencea and area


#include <iostream>
#include <cmath>
#define PI 3.14159

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0;
}