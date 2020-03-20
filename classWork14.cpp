#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
char ch;
int n;
cout << "enter a symbol";
cin >> ch;
cout << " enter a number";
cin >> n;
for (int i = 0; i < n; ++i) {
 for (int j = 0; j < n; ++j) {
  cout << ch;
 }
 cout << endl;
}
}
