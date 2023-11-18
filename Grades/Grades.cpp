#include <iostream>
using namespace std;

int main() {

	int score{};
	cout << "Enter your exam score (0-100): ";
	cin >> score;
	
	char grade{};

	if (score >= 0 && score <= 100) {
		if (score >= 90)
			grade = 'A';
		else if (score >= 80)
			grade = 'B';
		else if (score >= 70)
			grade = 'C';
		else if (score >= 65)
			grade = 'D';
		else if (score >= 0)
			grade = 'F';

		cout << "Your grade is: " << grade << endl;
		if (grade == 'F')
			cout << "Sorry, you must repeat this class, you dumb dumb.";
	
	} else {
		cout << "Sorry, that score is out of range.";
		main();
	}

	return 0;
}