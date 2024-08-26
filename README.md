his C++ program demonstrates basic usage of classes and objects. It includes the definition of a Car class and then creates and manipulates two instances of that class.

Include Directives:

cpp
Copy code
#include <iostream>
#include <string>
These lines include the necessary header files for input/output operations (iostream) and string manipulation (string).
Namespace Declaration:

cpp
Copy code
using namespace std;
This line allows the program to use standard library names (like cout, string) without prefixing them with std::.
Class Definition:

cpp
Copy code
class Car {
public:
    string brand;
    string model;
    int year;
};
A Car class is defined with three public member variables:
brand (a string to store the car's brand),
model (a string to store the car's model),
year (an int to store the year of manufacture).
Main Function:

cpp
Copy code
int main() {
    // Create an object of Car
    Car carObj1;
    carObj1.brand = "Audi";
    carObj1.model = "Audi75";
    carObj1.year = 1969;

    // Create another object of Car
    Car carObj2;
    carObj2.brand = "Ferrari";
    carObj2.model = "Ferrari488";
    carObj2.year = 2016;

    // Print attribute values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

    return 0;
}
Object Creation and Initialization:
carObj1 and carObj2 are instances of the Car class.
For carObj1, the brand, model, and year attributes are set to "Audi", "Audi75", and 1969, respectively.
For carObj2, the brand, model, and year attributes are set to "Ferrari", "Ferrari488", and 2016, respectively.
Output:
The cout statements print the attributes of both Car objects to the console. Each cout statement outputs the brand, model, and year of the car, followed by an endl to move to the next line.
Program Termination:

return 0; indicates that the program executed successfully and returns control to the operating system.
Summary
This program defines a Car class with three public attributes and creates two Car objects, each with specific attribute values. It then prints the attributes of these objects to the console.
