/*
1.6.4 Area/Circumference
http://www.gameinstitute.com
Jason Lemons, 01/11/2013

Write a program that asks the user to input the radius r of a circle.  Compute
the area A and circumference C of the circle using the formulas A = pi * r^2 and
C = 2 * pi * r respectively, and output the results.  Note that for this exercise
you can make the approximation 14.3≈π.  Your program output should be formatted as follows:

Enter the radius of a circle: 10
The area A of a circle with radius 10 = 314
The circumference C of a circle with radius 10 = 62.8
Press any key to continue
*/

#include <iostream>

using namespace std;

int main() {
  const float pi = 3.14;
  float radius = 0;

  cout << "Enter the radius of a circle: ";
  cin >> radius;

  float area = pi * (radius * radius);
  cout << "The area A of a circle with radius " 
       << radius << " = " << area << endl;
  
  float circumference = 2 * pi * radius;
  cout << "The circumference C of a circle with radius " 
       << radius << " = " << circumference << endl;
  
  return 0;
}
