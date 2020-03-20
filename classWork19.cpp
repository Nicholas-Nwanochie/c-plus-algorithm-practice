#include "pch.h"

#include <iostream>


using namespace std;

int *locateLargest(int a[][4]) {
int *arr = new int[2];
for (int i = 0; i < 3; ++i) {
for (int j = 0; j < 4; ++j) {
if (a[i][j] > a[arr[0]][arr[1]]) {
arr[0] = i;
arr[1] = j;
}
}
}
return arr;
}

int main() {
int rows = 3, columns = 4;
int arr[3][4];
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < columns; ++j) {
cout << "Enter a value: ";
cin >> arr[i][j];
}
}
cout << "\nThe entered matrix:" << endl;
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < columns; ++j) {
cout << "  " << arr[i][j];
}
cout << endl;
}
int *result = locateLargest(arr);
cout << "\nFirst Large value is located at row " << result[0] << " and column " << result[1] << endl;
delete[] result;
return 0;
}
