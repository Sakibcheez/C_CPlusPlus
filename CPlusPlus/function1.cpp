
#include<iostream>
using namespace std;


int myFunction(int x, int y);

int main() {
  cout << myFunction(5, 3);
  return 0;
}


int myFunction(int x, int y) {
  return x + y;
}
