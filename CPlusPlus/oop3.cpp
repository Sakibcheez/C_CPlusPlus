

#include <iostream>

using namespace std;



class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }

    void myMethod2();


};



// Method/function definition outside the class
void MyClass::myMethod2() {
  cout << "Hello World 2 !";
}


class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed+3;
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  cout << endl ;
  myObj.myMethod2();
    cout << endl ;

  Car myObj1;

  cout << myObj1.speed(200); // Call the method with an argument
  return 0;
}
