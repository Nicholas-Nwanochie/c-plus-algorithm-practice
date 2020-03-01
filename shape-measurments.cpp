#include <iostream>
using namespace std;


double rectangleArea(double width, double height)
{
return width * height;
}

double SquareArea(double side)
{
return side * side;
}

double circleArea(double radius)
{
return 3.14 *(radius * radius);
}

double triangleArea(double base, double height2)
{
return .5 * base * height2;
}



int main()
{
double base, height2, width, radius, length, side;


cout << " enter in width" << endl;
cin >> width;
cout << " the width is " << width << endl;
cout << " enter in length" << endl;
cin >> length;
cout << " the length is " << length << endl;

double result = rectangleArea(width, length);
cout << "rectangle width " << width << endl;
cout << " rectangel length " << length << endl;
cout << " the area is " << result << endl;

cout << "enter in the sqaure side" << endl;
cin >> side;

double result2 = SquareArea(side);
cout << "sqaure side is " << side << endl;
cout << " the area is " << result2 << endl;

cout << " enter in the circle radius" << endl;
cin >> radius;

double result3 = circleArea(radius);
cout << "circle radius " << radius << endl;
cout << " the area is " << result3 << endl;

cout << "enter in the triangle base and height" << endl;
cin >> base >> height2;

double result4 = triangleArea(base, height2);
cout << "triangle width " << base << endl;
cout << " triangle height " << height2 << endl;
cout << " the area is " << result4 << endl;
}
