// including the library
#include <iostream>

using namespace std;

//Defining the function
int main () {

//Declaring variables a
   unsigned int a;
   unsigned int b;
   cout << " This is a program to enter two angles of a triangle and find the third angle." << endl ;
//asking for input
   cout << " Please enter your first angle"<< endl;
//reading the input value
   cin >> a;
   cout << " Your first angle is " << a << " ° " << endl;
   cout << " Please enter your second angle"<< endl;
   cin >> b;
   cout << " Your second angle is " << b << " ° " << endl;
   cout << " So the third angle of your triangle is " << 180-(a+b) << " ° " << endl;
//ending the program
   return 0;

}
