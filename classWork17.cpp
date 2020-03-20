#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
cout << "Enter in number to find the sum" << endl;
int n;
int i = 0;
int sum = 0;
cin >> n;

while (i <= n) {
 if (i % 2 == 0) 
  sum += i;
 i++;
 


}

cout << sum ;

}
