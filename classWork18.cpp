#include "pch.h"
#include <iostream>
using namespace std;

int PrintChar(char one, char two) {
int sum;
int letter = 0;


do {
 letter = int(one);
 cout << one << " ";
 letter++;
 one = char(letter);
} while (one <= two);
if( one >= two){
cout << " invlaid bro" << endl;
}
sum = one;
return sum;

   
}

int main()
{
char one, two;
int sum;
cout << " Enter in two letters" << endl;
cin >> one >> two;

sum = PrintChar( one, two);



}
