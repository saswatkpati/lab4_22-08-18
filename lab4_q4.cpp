// including the library
#include <iostream>

using namespace std;

//Defining the function
int main () {

//Declaring variables a
   unsigned int a;
   cout << " this is a program to convert days into years, weeks and days." << endl ;
//asking for input
   cout << " Please enter the number of days "<< endl;
//reading the input value
   cin >> a;
   cout << " The value entered is: " << a << " Days " << endl;
//performing the program
   cout << " Which is equal to " << a/365 << " Years " << (a%365)/7 << " Weeks and " << (a%365)%7 << " Days" << endl;
//ending the program
   return 0;

}
