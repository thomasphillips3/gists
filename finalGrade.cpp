/*
Write a program that will compute your final grade for a programming course you are taking. Here is the grading scheme:
Final grades will be based on the following:
- 40% Assignments
- 15% Midterm Examination
- 35% Final Examination
- 10% Class Participation Grade

Ask the user for the four assignment scores, the midterm, final and section grades. The final score is calculated and printed. To do the calculations, average the four assignment scores together and then multiply it by 0.4 (40%). You then multiply the midterm score by 0.15, the final by 0.35 and the participation grade by 0.1. Then you add all the results of these multiplications together.

Use functions wherever you can in this program. You can create a function to get the input by passing in as a parameter the string to be displayed in an explanatory cout.
Thomas Phillips
July 21, 2017
*/

#include <iostream>
#include <array>

using namespace std;

const int ASSIGNMENTS = 4;
const int MIDTERMS = 2;

int EnterGrades(int grades[], int finalGrade);

int main() {

  int gradeBook [ASSIGNMENTS + MIDTERMS + 1] = {};
  int finalGrade = 0;
  EnterGrades(gradeBook, finalGrade);

  return 0;
}

int EnterGrades(int grades[], int finalGrade) {
  for (int i = 1; i <= ASSIGNMENTS; i++) {
    cout << "Enter assignment " << i << " grade: "; cin >> grades[i];
    finalGrade = grades[i] + finalGrade;
  }
  finalGrade = (finalGrade/ASSIGNMENTS)*0.4;

  cout << "Enter midterm grade: "; cin >> grades[ASSIGNMENTS + 1];
  finalGrade = grades[ASSIGNMENTS + 1] * 0.15 + finalGrade;

  cout << "Enter final grade: "; cin >> grades[ASSIGNMENTS + 2];
  finalGrade = grades[ASSIGNMENTS + 2] * 0.35 + finalGrade;

  cout << "Enter participation grade: "; cin >> grades[ASSIGNMENTS + 3];
  finalGrade = grades[ASSIGNMENTS + 3] * 0.10 + finalGrade;

  cout << "Final: " << finalGrade << endl;
  return finalGrade;
}
