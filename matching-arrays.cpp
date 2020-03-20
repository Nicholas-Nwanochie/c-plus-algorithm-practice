#include "pch.h"
#include <iostream>

using namespace std;

bool compare(int a[], int b[], int n)
{
int c = 0;
for (int i = 0; i < n; i++)
{
 if (a[i] == b[i]) // comparing two arrays
 {
  c++;
 }
}
if (c == n)
{
 return true; // return true if both arrays are same
}
else
{
 return false; // return false if both arrays are not same
}
}

int main()
{
int a[1000], b[1000], n;
cout << "Array size : ";
cin >> n; // read size
cout << "First Array : ";
for (int i = 0; i < n; i++)
{
 cin >> a[i]; // read first array
}
cout << "Second Array : ";
for (int i = 0; i < n; i++)
{
 cin >> b[i]; // read second array
}
if (compare(a, b, n)) // pass arrays and size as a parametre from the compare function
{
 cout << "The Arrays are Identical";
}
else
{
 cout << "The Arrays are not Identical";
}

return 0;
}

