// hello.cpp
// Author: Thomas Phillips
// Description: Prompt the user for a phrase, and number of times to repeat.
// Get the phrase, number of lines, and number of times to repeat from the user.

#include <iostream>
using namespace std;

int main() {
  int width, lines, times;
  string phrase = "Hello World!";
  string prompt1 = "Enter a phrase: ";
  string prompt2 = "Number of lines: ";
  string prompt3 = "Times to repeat: ";
  string prompt4 = "String width: ";

  cout << prompt1;
  getline(cin, phrase);

  cout << prompt2;
  cin >> lines;

  cout << prompt3;
  cin >> times;

  cout << prompt4;
  cin >> width;

  for (int i=0; i<lines; i++) {
    for (int j=0; j<times; j++) {
      cout.width(width);
      cout << phrase;
    }
    cout << endl;
  }
  return 0;
}
