#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// Input radius and print
	int radiusM;
	cout << "Welcome to the Circle Calculator \n";
	cout << "Please input a radius for the circle in meters: ";
	cin >> radiusM;
	cout << "You gave the circle a radius of: " << radiusM << " meters \n";
	
	// Calc dia based on rad and print
	int diameterCM = radiusM*2*100;
	cout << "And a diameter of " << diameterCM << " CM \n";
	
	// Calc circumference and print
	const float pi = M_PI;
	float circumferenceCM = pi*diameterCM;
	cout << "The circles circumference is " << circumferenceCM << " CM \n";
	
	// Calc square meters and print
	int areaM2 = pi*pow(radiusM, 2);
	cout << "The circles area is " << areaM2 << " m^2";
  return 0;
}
