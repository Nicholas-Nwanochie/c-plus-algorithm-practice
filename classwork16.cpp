#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
int n = 8, i, j;
int x = 1;
for (i = n; i > 0; i--) {

 for (j = 0; j < i; j++) {
  cout << " ";

}
 for (j = 0; j < x; j++) {
  cout << "*";
 }
 cout << endl;
 x += 2;
}
