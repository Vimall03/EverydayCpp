#include<iostream>
#include<string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string n, int a) {
        name = n;
        age = a;
    }

    // Member function to display person's information
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    // Create an instance of the Person class
    Person person("John Doe", 25);

    // Call the member function to display the person's information
    person.displayInfo();

    return 0;
}
