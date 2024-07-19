#include <iostream>

using namespace std;

int calculate(int x, int y, char mode) {
	int res;
	switch (mode) {
	case 'a':
		res = x + y;
		break;
	case 's':
		res = x - y;
		break;
	case 'm':
		res = x * y;
		break;
	case 'd':
		res = x / y;
		break;
	}
	return res;
}

int main() {
	int x, y, res;
	char mode;

	cout << "Assign a value for int x: ";
	cin >> x;
	cout << "Assign a value for int y: ";
	cin >> y;
	cout << "Choose a mode for operaton x [] y: add (a), subtract (s), multiply (m) or divide (d): ";
	cin >> mode;

	int result = calculate(x, y, mode);

	cout << "Result is " << result << endl;

	return 0;
}