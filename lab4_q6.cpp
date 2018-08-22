// including the library
#include <iostream>

using namespace std;

//Defining the function
int main () {

//Declaring variables a
   unsigned int a;
   unsigned int b;
   cout << "This is a program to enter base and height of a triangle and find its area." << endl ;
//asking for input
   cout << "Please enter height of your triangle in some unit"<< endl;
//reading the input value
   cin >> a;
   cout << "So the height of your triangle is " << a << " units" << endl;
   cout << "Please enter length of base of your triangle in the same unit "<< endl;
   cin >> b;
   cout << "Your base base length is " << b << " units" << endl;
   cout << "So the area of your triangle is " << (a*b)*0.5 << " unit square" << endl;
//ending the program
   return 0;

}
