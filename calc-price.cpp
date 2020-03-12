#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//class program
class Stock
{
public:
string Symbol, Name;
double previousClosingPrice, currentPrice;

Stock(string Symbol, string Name) {
 this->Symbol = Symbol;
 this->Name = Name;
}

string getName() {
 return Name;
}

string getSymbol() {
 return Symbol;
}

void setClosingPrice(double previousClosingPrice) {
 this->previousClosingPrice = previousClosingPrice;
}

void setCurrentPrice(double currentPrice) {
 this->currentPrice = currentPrice;
}
double getChangePercent() {
 double change = currentPrice - previousClosingPrice;
 if (change < 0)
  change *= (-1);
 return round(change / currentPrice * 100);
}
void toString() {
 cout << Name << " stock’s closing price is $" << currentPrice << endl;
}
};

//test program


void print(Stock obj) {
cout << obj.getName() << " stock:\n" << "Symbol: " << obj.getSymbol() << endl;
cout << "Closing price: " << obj.previousClosingPrice << endl;
cout << "Current price: " << obj.currentPrice << endl;
cout << "Change percent:- " << obj.getChangePercent() << "%\n";
obj.toString();
cout << endl;
}

int main()
{
Stock Gobj("GOG", "Google");
Stock Mobj("MSF", "Microsoft");
Gobj.setClosingPrice(134.67);
Gobj.setCurrentPrice(131.98);
Mobj.setClosingPrice(156.52);
Mobj.setCurrentPrice(161.22);

print(Gobj);
print(Mobj);
return 0;
}
