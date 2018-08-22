// including the library
#include <iostream>

using namespace std;

//Defining the function
int main () {

//Declaring variables a
   unsigned int a;
   unsigned int b;
   cout << "This is a program to calculate area of an equilateral triangle." << endl ;
//asking for input
   cout << "Please enter the side length of your equilateral triangle"<< endl;
//reading the input value
   cin >> a;
   cout << "So the length of any side is " << a << " units" << endl;
   cout << "So the area of your equilateral triangle is " << (a*a)*1.732 << " unit square" << endl;
//ending the program
   return 0;

}
