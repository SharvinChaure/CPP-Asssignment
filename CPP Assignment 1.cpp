 #include <iostream>
#include <string>
using namespace std; 
  
   class Car {
    
 public:
    string brand;
    string model;
    int year;
};

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
      cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year <<endl;
      cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year <<endl;
      
    return 0;
    
}