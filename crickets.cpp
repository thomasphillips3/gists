/*
The common field cricket chirps in direct proportion to the current temperature. Adding 40 to the number of time a cricket chirps in a minute, then dividing that value by 4 gives us the temperature. Write a program that takes as input the number of chirps in a minute and prints the current temperature.

Thomas Phillips
July 21, 2017
*/

#include <iostream>

using namespace std;

int main () {
  int chirps;
  cout << "Chirps/ min: "; cin >> chirps;
  cout << "Temp is: " << (chirps + 40.0)/4 << "º\n";
  return 0;
}
