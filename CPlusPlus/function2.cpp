
#include<iostream>
using namespace std;



void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  cout << endl ;


    int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);

  return 0;
}




