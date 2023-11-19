#include <iostream>
using namespace std;

int main() {

	/*switch (control expression) {
	case expression_1: statement; break;
	case expression_2: statement; break;
	case expression_3: statement; break;
	case expression_4: statement; break;
	default: statement_default
	}*/

	char selection{'1'};

	switch (selection) {
	case '1': cout << "1 Selected";
		break;
	case '2': cout << "2 Selected";
		break;
	case '3': 
	case '4': cout << "3 or 4 Selected"; // notice no code in case 3. this will basically move on to 4 and execture if either are selected. useful if multiple cases have the same condition. Best practice is to have each case do something along with a break. If you don't use a break, make sure to note it for futre coders.
		break;
	default: cout << "No value selected.";
	}

	enum Color {
		red, green, blue // this is an enumeration type variable that contains a range or specific set of values. It acts sort of like a class.
	};

	Color screenColor{ green };

	switch (screenColor) {
	case red: 
		cout << "red";
		break;
	case green: 
		cout << "green";
		break;
	case blue: 
		cout << "blue";
		break;
	default: cout << "should never execute since enum must be red green or blue.";
	}

	return 0;
}