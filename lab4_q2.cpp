// including the library
#include <iostream>

using namespace std;

//Defining the function
int main () {

//Declaring variables a
   double a;
   cout << " this is a program to enter temperature in Celsius and convert it into Fahrenheit." << endl ;
//asking for input
   cout << " Please enter your value in Celsius"<< endl;
//reading the input value
   cin >> a;
   cout << " The value entered is " << a << " Degree C" << endl;
//performing the program
   cout << " Your value in Fahrenheit is " << (a*1.8)+32 << " Fahrenheit " << endl;
//ending the program
   return 0;

}
