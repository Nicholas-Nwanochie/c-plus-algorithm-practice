#include <iostream>
	using namespace std;
	
	class PacMan {
	public:
	int X = 5;
	int Y = 5;
	
	void Move(){
	
	cout << "current location X: " << X << " Y: " << Y << endl;
	cout << "(U)p, (D)own, (L)eft, (R)ight, or (Q)uit. " << endl;
	cout << "" << endl;
	cout << "" << endl;
	
	 char direction;
	 cin >> direction;
	
	 while(direction != 'q')
	 {
	if(direction == 'u')
	{
	Y = Y+1;
	if(Y==11)
	{
	  Y=0;
	}
	
	
	}
	else if (direction == 'd')
	{
	Y = Y-1;
	if(Y==0)
	{
	  Y=10;
	}
	
	 }
	else if (direction == 'l')
	{
	X = X-1;
	if(X==0)
	{
	  X=10;
	}
	
	 }
	 else if (direction == 'r')
	{
	X = X+1;
	if(X==11)
	{
	  X=0;
	}
	
	 }
	 else {
	if(direction == 'q')
	
	cout << " game over" << endl;
	
	 }
	cout << "current location X: " << X << " Y: " << Y << endl;
	cout << "(U)p, (D)own, (L)eft, (R)ight, or (Q)uit. " << endl;
	cin >> direction;
	}
	} 
	};
	
	
	int main() {
	 
	  PacMan P1;
	  P1.Move();
	 
	}
