#include <iostream>
using namespace std;

int main() {

	enum Direction {
		left, right, up, down
	};

	Direction heading{ left };

	switch (heading) {
	case left:
		cout << "going left" << endl;
		break;
	case right:
		cout << "going right" << endl;
		break;
	case up:
		cout << "going up" << endl; // if you leave out some options for your enumeration, you will get a warning stating that you didn't account for that value. 
		break;
	case down:
		cout << "going down" << endl;
		break;
	default: 
		cout << "Invalid heading" << endl;
	}


	// conditional operator -- (conditional expression) ? expression1: expression2
	// evaluates the conditional expression, if true, expression1. If false expression2. Only use this if you have simple conditionals that allow for one expresion upon resolution and with only one condition. Don't nest.

	int a{ 10 }, b{ 20 };
	int score{ 92 };
	int result{};

	result = (a > b) ? a : b; // not true, so result will be b (20)
	result = (a < b) ? (b - a) : (a - b); // true, so result will be b-a (20-10, 10)
	result = (b != 0) ? (a / b) : 0; // true, so result will be a/b (10/20, 0.5 which will become 0 since it's an int).
	cout << ((score > 90) ? "Excellent" : "Good"); // True, so Excellent will get output.




	cout << endl;
	return 0;
}