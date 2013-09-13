/*
2.7.3 Average
http://www.gameinstitute.com
Jason Lemons, 01/11/2013

Write an averaging program.  The program must prompt the user to enter a 
positive integer that specifies the number of values n the user wishes to 
average.  The program must then ask the user to input these n values.  The 
program should then compute the average of the values inputted and output it 
to the user.  Use the following average formula:

avg = (a1 + a2 +...+a(n-1))/n

Your program's output should look like the following:

Enter the number of values to average: 5
[0] = 1
[1] = 2
[2] = 3
[3] = 4
[4] = 5
Average = 3
Press any key to continue
*/

#include <iostream>

using namespace std;

int main() {
  float array_to_average[100];
  float average = 0;
  int total = 0;
  int num_of_values = 0;
  
  cout << "Enter the number of values to average: ";
  cin >> num_of_values;

  for (int count = 0; count < num_of_values; count++) {
    cout << "[" << count << "] = ";
    cin >> array_to_average[count];
    total = total + array_to_average[count];   // Keep track of the current sum of all numbers
  }

  average = total / num_of_values;  //Divide the sum of all numbers by the amount of numbers
  cout << "Average = " << average << endl;
  return 0;
}
