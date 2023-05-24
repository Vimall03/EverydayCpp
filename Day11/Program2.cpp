#include <iostream>
#include <string>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Member function to calculate area
    double calculateArea() {
        return length * width;
    }

    // Member function to calculate perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }

    // Member function to display rectangle details
    void displayDetails() {
        std::cout << "Length: " << length << std::endl;
        std::cout << "Width: " << width << std::endl;
        std::cout << "Area: " << calculateArea() << std::endl;
        std::cout << "Perimeter: " << calculatePerimeter() << std::endl;
    }
};

int main() {
    // Create an instance of the Rectangle class
    Rectangle rectangle(4.5, 2.5);

    // Call the member function to display the rectangle details
    rectangle.displayDetails();

    return 0;
}
