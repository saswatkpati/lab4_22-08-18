// including the library
#include <iostream>

using namespace std;

//Defining the function
int main () {

//Declaring variables a
   float a;
   cout << " this is a program to enter length in centimeter and convert it into meter and kilometer." << endl ;
//asking for input
   cout << " Please enter your value in centimeter"<< endl;
//reading the input value
   cin >> a;
   cout << " The value entered is " << a << " cm" << endl;
//performing the program
   cout << " Your value in meter is" << a/100 << " m " << endl;
   cout << " Your value in kilometer is" << a/100000 << "km" << endl ;
//ending the program
   return 0;

}
