#include <iostream>
#include <string>
// using namespace std; - Remove this line

//You might see some C++ programs that runs without
//the standard namespace library.
//The using namespace std line can be omitted and replaced with
//the std keyword,
//followed by the :: operator for string (and cout) objects:

int main() {
  std::string greeting = "Hello";
  std::cout << greeting <<  " " ;


  std::string greeting1 = "Hello";  // Regular String
    char greeting2[] = "Hello";  // C-Style String (an array of characters)
    std::cout << greeting2 ;

return 0;
}
