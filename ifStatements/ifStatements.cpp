#include <iostream>
using namespace std;

int main() {

	int num{};
	const int max{ 100 };
	const int min{ 10 };

	cout << "Enter a number between " << min << " and " << max << ": ";
	cin >> num;

	if (num<min || num>max)
	{
		cout << "That number is out of range. ";
		cout << num;
		main();
	}
	else {
		cout << "\nYou have entered " << num << ". This satisfies me greatly. Thank you.";
	}

	return 0;
}