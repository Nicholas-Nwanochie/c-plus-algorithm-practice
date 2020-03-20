#include "pch.h"
#include<iostream>
#include<fstream>
#include<string>


using namespace std;
void print_grades(int score[], int size, fstream& fs)
{
for (int i = 0; i < size; i++)
{
 if (score[i] >= 90)
  fs << "Student " << i << " score is " << score[i] << " and grade is A" << endl;
 else if (score[i] >= 80)
  fs << "Student " << i << " score is " << score[i] << " and grade is B" << endl;

 else if (score[i] >= 70)
  fs << "Student " << i << " score is " << score[i] << " and grade is C" << endl;
 else if (score[i] >= 60)
  fs << "Student " << i << " score is " << score[i] << " and grade is D" << endl;
 else
  fs << "Student " << i << " score is " << score[i] << " and grade is F" << endl;

}

}




int main()
{
fstream fs;
fs.open("myfile.csv", fstream::out);

int size;
cout << "Enter class size :";
cin >> size;
int* score = new int[size];
for (int i = 0; i < size; i++)
{
 cout << "Enter grade:";
 cin >> score[i];
 while (score[i] < 0 || score[i]>100)
 {
  cout << "Invalid score !!! Try again :";
  cin >> score[i];
 }
}
fs << "Class size:," << to_string(size) << endl;
fs << "Entered Grades:";
for (int i = 0; i < size; i++)
{
 fs << "," << to_string(score[i]);
}
fs << endl;
print_grades(score, size, fs);
}
