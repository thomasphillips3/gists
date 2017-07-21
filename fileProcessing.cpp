/*
fileProessing.cpp
Description: Illustration of file processing

Thomas Phillips
July 21, 2017
*/

#include <iostream>
#include <fstream>

using namespace std;

int main () {
  char firstName[30], lastName[30], fileName[20];
  int age;

  cout << "First name: "; cin >> firstName;
  cout << "Last name: "; cin >> lastName;
  cout << "Age: "; cin >> age;
  cout << endl << "File name: "; cin >> fileName;

  ofstream People(fileName, ios::out);
  People << firstName << " " << lastName << endl << age << endl;

  return 0;
}
