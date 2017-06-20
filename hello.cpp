// hello.cpp
// Author: Thomas Phillips
// Description: Print "Hello World!" 4 times on a line for 6 lines, where each is printed in a field of 17 spaces.

#include <iostream>
using namespace std;

int main() {
  const int WIDTH = 17;
  const int LINES = 6;
  const int TIMES = 4;

  for (int i=0; i<LINES; i++) {
    for (int j=0; j<TIMES; j++) {
      cout.width(WIDTH);
      cout << "Hello World!";
    }
    cout << endl;
  }
  return 0;
}
