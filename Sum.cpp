#include "pch.h"
#include <iostream>
using namespace std;

int SumDigits(int num) {

int sum = 0;

while (num > 0) {
 sum += num % 10;
 num /= 10;


}

return sum;

}

int main()
{
int num;
cout << "Enter in a set of numbers" << endl;
cin >> num;

int sum = SumDigits(num);
cout << sum;
}
