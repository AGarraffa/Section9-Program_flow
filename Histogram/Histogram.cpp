#include <iostream>
#include <vector>
using namespace std;

int main() {

	 
	int numItems{};
	cout << "How many items do you have? ";
	cin >> numItems;

	vector <int> data{};

	for (size_t i = 1; i <= numItems; i++)
	{
		int dataPoint;
		cout << "Please enter datapoint " << i << ": ";
		cin >> dataPoint;
		data.push_back(dataPoint);
	}

	cout << "\nDisplaying historgram" << endl;
	cout << "------------------------------" << endl;

	for (auto val : data) {
		for (size_t i = 0; i <= val; i++)
		{
			if (i % 5 == 0)
				cout << "*";
			else 
				cout << "-";
		}
		cout << endl;
	}

	return 0;
}