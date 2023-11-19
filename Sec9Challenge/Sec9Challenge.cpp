#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

// use a collection (list) of integers and allow the user to select an option.
// the program options are: 

// P - Print numbers
// A - Add a number
// M - Display the mean of the numbers
// S - Display the smallest number
// L - Display the largest number
// Q - quit
 
// for cleaner code, write multiple functions and put them in the switch.

int main() {


	char selection{};
	vector <int> data{};
	
		do {
			cout << "\nP - Print your all numbers." << endl;
			cout << "A - Add a number." << endl;
			cout << "M - Display the mean of the numbers." << endl;
			cout << "S - Display the smallest number." << endl;
			cout << "L - Display the largest number." << endl;
			cout << "C - Clear the list and start over." << endl;
			cout << "Q - Quit" << endl;
			cout << "Please make a selection: ";
			cin >> selection;
			selection = tolower(selection);

			switch (selection) {
			case 'p': 
			{
				if (data.size() == 0) {
					cout << "\n[] - The list is empty\n" << endl;
				}
				else {
					cout << "[ ";
					for (auto val : data)
						cout << val << ", ";
					cout << "]\n" << endl;
				}
				break;
			}
			case 'a': 
			{
				int num{};
				cout << "\nPlease enter a number: ";
				cin >> num;
				data.push_back(num);
				cout << endl <<  num << " has been added to the dataset.\n" << endl;
				break;
			}
			case 'm':
			{
				if (data.size() == 0) {
					cout << "\nThere are no data. Unable to calculate the mean.\n" << endl;
				}
				else {
					float avg{};
					int total{};
					for (auto val : data) {
						total += val;
					}
					avg = static_cast<float>(total) / data.size();
					cout << "\nThe average of the dataset is " << avg << ".\n" << endl;
				}
				break;
			}
			case 's':
			{
				if (data.size() == 0) {
					cout << "\nUnable to find the smallest number; there are no data.\n" << endl;
				}
				else {
					int small{data[0]};
					for (auto val : data) {
						if (val < small)
							small = val;
					}
					cout << "\nThe smallest number in the dataset is " << small << ".\n" << endl;
				}
				break;
			}
			case 'l':
			{
				if (data.size() == 0) {
					cout << "\nUnable to find the largest number; there are no data.\n" << endl;
				}
				else {
					int large{data[0]};
					for (auto val : data) {
						if (val > large)
							large = val;
					}
					cout << "\nThe largest number in the dataset is " << large << ".\n" << endl;
				}
				break;
			}
			case 'c':
			{
				data = {};
				break;
			}
			case 'q':
				cout << "\nSee you next time!" << endl;
				break;
			default:
				cout << "\nI have no idea what that means\n" << endl;
			}

		} while (selection != 'Q' && selection != 'q');

	return 0;
}