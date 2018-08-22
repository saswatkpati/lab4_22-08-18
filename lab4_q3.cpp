// including the library
#include <iostream>

using namespace std;

//Defining the function
int main () {

//Declaring variables a
   double a;
   cout << " This is a program to enter in Fahrenheit and convert it into Celsius." << endl ;
//asking for input
   cout << " Please enter your value in Fahrenheit"<< endl;
//reading the input value
   cin >> a;
   cout << " The value entered is " << a << " Fahrenheit" << endl;
//performing the program
   cout << " Your value in Fahrenheit is " << (a-32)/1.8 << " ° Celsius " << endl;
//ending the program
   return 0;

}
