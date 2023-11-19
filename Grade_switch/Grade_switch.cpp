#include <iostream>
using namespace std;

int main() {

	char letterGrade{};

	cout << "Enter the letter grade you expect on the exam: ";
	cin >> letterGrade;

	switch (letterGrade) {
	case 'a':
	case 'A': 
	{
		cout << "You need a 90 or above." << endl;
		break;
	}
	case 'b':
	case 'B': 
	{
		cout << "You need between an 80 and 89." << endl;
		break;
	}
	case 'c':
	case 'C':
	{
		cout << "You need between 70 and 79" << endl;
		break;
	}
	case 'd':
	case 'D': 
	{
		cout << "You need between 65-69" << endl;
		break;
	}
	case 'f':
	case 'F': 
	{
		char confirm{};
		cout << "Are you sure (Y/N)?";
		cin >> confirm;
		if (confirm == 'y' || confirm == 'Y')
		{
			cout << "OK, I guess you didn't study.";
		} else if (confirm == 'n' || confirm == 'N')
			cout << "Good, got study." << endl;
		else
			cout << "Invalid choice." << endl;
		break;
	}
	default: 
		cout << "Sorry, you didn't enter a valid grade." << endl;
	}

	return 0;
}