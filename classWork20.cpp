#include "pch.h"
#include <iostream>
#include <cstdlib> 
#include <time.h> 
using namespace std; 


int main() {


int arr[5], flag = 1;


srand(time(0));


for (int i = 0; i < 5; i++)
{
arr[i] = (rand() % 50) + 1;
}

//iterate till required non-decreasing sequence is obtained
while (flag == 1)
{

int rndm1 = rand() % 5;
int rndm2 = rand() % 5;
int temp = arr[rndm1];
arr[rndm1] = arr[rndm2];
arr[rndm2] = temp;


cout << "|";
for (int i = 0; i < 5; i++)
{
cout << arr[i] << "|";
}
cout << endl;

//for cheking whether required sequence is obtained
int i = 0;
for (; i < 5; i++)
{
if (arr[i - 1] > arr[i])
{
break;
}
}
//check for the exiting condition
if (i == 5)
flag = 0;
}
return 0;
}
