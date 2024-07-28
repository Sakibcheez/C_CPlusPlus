#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int i = 0;
    while (i < 5) {
    cout << i << "\n";
    i++;
}

cout << endl ;
int j = 0;
do {
  cout << j << "\n";
  j++;
}
while (j < 5);

cout << endl ;

for (int k = 0; k <= 10; k = k + 2) {
  cout << k << "\n";
}

// Outer loop
for (int i = 1; i <= 2; ++i) {
  cout << "Outer: " << i << "\n"; // Executes 2 times

  // Inner loop
  for (int j = 1; j <= 3; ++j) {
    cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  }
}

cout << endl ;

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers)
    {
  cout << i << "\n";
    }

    cout << endl ;

    for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  cout << i << "\n";
}

cout << endl;

for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
}

return 0;
}

