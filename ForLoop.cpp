#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.141593;

int main() {
  double radians, conversionFactor = PI / 180;

  //set formats
  cout.setf(ios::fixed);
  cout.precision(6);

  //print degrees and radians in a loop using a for loop 
  cout << "Degrees and Radians \n" ;
  for(int degrees=0; degrees <=90; degrees+=10)
  {
    radians = degrees*conversionFactor;
    cout<<setw(6) << degrees << setw(10)<< radians << endl;
  }
  return 0;
}