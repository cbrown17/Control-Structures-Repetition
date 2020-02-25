/* This progam prints a degree-to-radian table 
using a while loop , do while & for loop structure*/
#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.141593;
int main() {
/* while loop
//Declare and initialize objects
int degrees = 0;
double radians;

//set formats
cout.setf(ios::fixed);
cout.precision(6);

//Print radians and degrees in a loop 
cout << "Degrees to Radians \n";
while(degrees <= 360)
{
  radians = degrees*PI/180;
  cout << setw(6) << degrees << setw(10) << radians << endl;
  degrees += 10;
} */

/* do while loop 
//Declare and initialize objects
int degrees = 0;
double radians;

//set formats
cout.setf(ios::fixed);
cout.precision(6);

//Print radians and degrees in a loop 
cout << "Degrees to Radians \n";
do{
  radians = degrees*PI/180;
  cout << setw(6) << degrees << setw(10) << radians << endl;
  degrees += 10;

}while(degrees <= 360);
*/


//Exit Program
return 0; 
}