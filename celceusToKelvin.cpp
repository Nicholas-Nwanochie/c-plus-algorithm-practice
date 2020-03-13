#include <iostream>



double ctok(double c)                   // converts Celsius to Kelvin
{
		
          double k = c + 273.15;
          return k;
}
int main()
{
          double c = 0;                         // declare input variable
           std::cin >> c;                                // retrieve temperature to input variable
          double k = ctok(c);           // convert temperature
          std::cout << k ;                 // print out temperature
}
