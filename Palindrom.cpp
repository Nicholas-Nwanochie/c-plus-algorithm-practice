

#include <iostream>
using namespace std;

int Palindrom(int x)
{
int y = 0;
int ans;
while (x != 0)
{
 
 y = y * 10 + x % 10;
 x /= 10;
 ans = y;
 

}
return ans;
}

int main()
{
int y = 0;
int x ;
cin >> x;

int ans = Palindrom(x);
cout << ans;

if (x == ans)
{
 cout << "     Palindrom" << endl;
}
else
 cout << "     Not Palindrom" << endl;

}
