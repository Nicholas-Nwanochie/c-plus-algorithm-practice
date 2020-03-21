#include "pch.h"
#include <iostream>
using namespace std;

void bubble_sort(int A[], int size) {

int temp;
for (int i = 0; i < size; i++) {

for (int j = i; j < size; j++) {

if (A[i] > A[j]) {

temp = A[i];
A[i] = A[j];
A[j] = temp;
}
}
}
}

bool isEquivalent(int A[][3], int B[][3]) {

int A_[9];
int B_[9];

int index = 0;
for (int row = 0; row < 3; row++) {
for (int col = 0; col < 3; col++) {
A_[index++] = A[row][col];
}
}

index = 0;
for (int row = 0; row < 3; row++) {
for (int col = 0; col < 3; col++) {
B_[index++] = B[row][col];
}
}

bubble_sort(A_, 9);
bubble_sort(B_, 9);


for (int i = 0; i < 9; i++) {
if (A_[i] != B_[i]) return false;
}

return true;

}

int main() {

int A[3][3], B[3][3];
cout << "Array A: ";
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
cin >> A[i][j];
}
}

cout << "Array B: ";
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
cin >> B[i][j];
}
}

bool isEq = isEquivalent(A, B);
cout << endl;
if (isEq) {
cout << "Judgement: The arrays are equivalent." << endl;
} else {
cout << "Judgement: The arrays are not equivalent." << endl;
}

}
