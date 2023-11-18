#include <iostream>
using namespace std;

int main() {


	// Ask the user for the dimensions of a package (length, width, height).
	// Dimensions must be less than 10 inches.

	// Base cost is $2.50
	// If the volume is greater than 100 cubic inches, there is a 10% surcharge
	// if the volume is greater than 500 cubic inches there is a 25% surcharge.


	double length{}, width{}, height{}, volume{}, baseCost{ 2.5 }, surcharge100{ 0.1 }, surcharge500{ 0.25 }, totalCost{};
	const int maxSize{ 10 };
	cout << "Please input the package length, width, and height separated by a space: ";
	cin >> length >> width >> height;

	volume = length * width * height;

	if (length > maxSize || width > maxSize || height > maxSize) {
		cout << "This package is too large to ship.";
		return 0;
	}
	else if (volume > 500)
		totalCost = baseCost * surcharge500 + baseCost;
	else if (volume > 100)
		totalCost = baseCost * surcharge100 + baseCost;
	else
		totalCost = baseCost;

	cout << "The total volume is " << volume << " cubic inches. This package will cost: " << totalCost << " to ship." << endl;
	return 0;
}