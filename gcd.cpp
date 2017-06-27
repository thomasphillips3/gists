// Thomas Phillips
// Greatest Common Denominator
// Write a program with a function to compute gcd for two integers usign Euclidean algorithm without recursion.
// July 23, 2017

#include <iostream>
using namespace std;

int gcd (int num1, int num2);

int main () {
  int x, y;
  cout << "Enter 2 integers: ";
  if (!(cin >> x >> y)) {
    cerr << "Bad input. Try again.\n";
  } else {
    cout << "gcd: " << gcd(x, y) << endl;
  }
  return 0;
}

int gcd (int num1, int num2) {
  int temp;
  while (num2 != 0) {
    temp = num1 % num2;
    num1 = num2;
    num2 = temp;
  }
  return (num1);
}
