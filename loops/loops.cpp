#include <iostream>
#include <vector>
#include <iomanip> // this is to format outputs
using namespace std;

int main()
{
 
	// loops:
	// for, ranged based for, while, do-while
	// you can actually initialize multiple variables in the loop

	for (int i{ 0 }, j{ 0 }; i < 10; i++, j+=2)
	{
		cout << "i: " << i << " || j: " << j << endl;
	}


	cout << "==================================" << endl;

	int sum{ 0 };

	for (int i{ 0 }; i <= 15; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	cout << "Sum: " << sum << endl;

	cout << "==================================" << endl;

	// ranged based for loop.
	// for (var_type var_name: sequence)
	//		statement; 

	int scores[]{ 100, 90, 97 };

	for (int score : scores) // this just iterates over the entire array, without having to do array.size()-1.
		cout << "Score: " << score << endl;

	for (auto score : scores) // the auto will automatically define the variable type based on the array.
		cout << "Score: " << score << endl;

	cout << "==================================" << endl;

	vector<double> temps{ 87.2, 77.1, 80.0, 72.5 };

	double avgTemp{};
	double runningSum{};

	for (auto temp : temps)
		runningSum += temp;

	avgTemp = runningSum / temps.size();

	cout << fixed << setprecision(2); // sets the decimal places to 2.
	cout << "Average temperature: " << avgTemp << " degrees." << endl;

	cout << "==================================" << endl;


	int hiScores[]{ 10,20,30 };

	for (auto score : hiScores)
		cout << score << endl;
	
	cout << "==================================" << endl;

	for (auto c : "This is a test") // this will iterate over the string "This is a test"
		cout << c << endl;

	cout << "==================================" << endl;
	vector<int> vec{ 1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700 };
	int count{};

	for (auto elem : vec) {
		if (elem % 3 == 0 || elem % 5 == 0) {
			count++;
		}
	}
	cout << "Count: " << count << endl;

	cout << "==================================" << endl;

	int num{};

	cout << "Enter an integer less than 100: ";
	cin >> num;

	while (num > 100) {
		cout << "Enter an integer less than 100: "; // notice this line is repeated which means this can be trimmed.
		cin >> num;
	}

	cout << "Thanks for the " << num << endl;

	// while loops are good with booleans to continue until something is true

	bool done{ false };
	while (!done) {
		cout << "Enter an integer less than 100: ";
		cin >> num;
		if (num > 100)
			cout << "Try again";
		else {
			cout << "Thanks for the " << num << endl;
			done = true;
		}
	}

	cout << "==================================" << endl;

	// do while
	// do {
	//	statements;
	// } while (expression); <=== note the semicolon

	// do while is a post test loop (as opposed to the while loop which is a pre test loop.
	// this means the loop will run once before checking the condition.

	do {
		cout << "Enter an integer less than 100: ";
		cin >> num; 
	} while (num > 100);
	cout << "Thanks for the " << num << endl;

	cout << "==================================" << endl;

	char selection{};

	do {
		double width{}, height{};
		cout << "Enter a width and a height: ";
		cin >> width >> height;

		double area{ width * height };
		cout << "The area is " << area << endl;

		cout << "Would you like to calculate another (Y/N)? ";
		cin >> selection;
	} while (selection == 'Y' || selection == 'y');

	cout << "Thanks!" << endl;

	cout << "==================================" << endl;

	do {
		
		cout << "1: Do this" << endl;
		cout << "2: Do that" << endl;
		cout << "3: Do another thing" << endl;
		cout << "Q: Quit" << endl;
		cout << "\n Enter your selection: ";
		cin >> selection;

		switch (selection){
			case '1': // note that the 1 is in single quotes. This is because selection is a char.
					cout << "You have chosen 1. I'm doing this." << endl;
					break;
			case '2':
					cout << "You have chosen 2. I'm doing that." << endl;
					break;
			case '3':
				cout << "You have chosen 3. I'm doing another thing." << endl;
				break;
			case 'q':
			case 'Q':
				cout << "Thank you." << endl;
				break;
			default: 
				cout << "Invalid entry. Please try again." << endl;
				break;

		}
	} while (selection != 'Q' && selection != 'q'); // when writing a do while loop, start with the while statement to know when to break out of the loop, then work through the loop.


	// continue and break:
	// continue means the loop stops any tasks and starts from the beginning again. 
	// break means the loop is terminated at the break (no code is executed after).

	cout << "==================================" << endl;

	vector <int> values{ 1, 2, 3, -1, 3, -99, 7, 8, 10 };

	for (auto val: values) {
		if (val == -99)
			break;
		else if (val == -1)
			continue; // finish this loop here and go back to the start (continuing through the vector).
		else
			cout << val << endl;
	} // this loop outputs:
	// 1
	// 2
	// 3
	// 3


	// infinite loops aren't always a problem. 
	// an operating system is an infinite loop, handling resources and systems until you shut down the computer.

	return 0;
}