#include <iostream>

using namespace std;


int main()
{
	int number1, number2;

	cout << "Enter two numbers: ";
	cin >> number1 >> number2;

	if (number1 < number2)
		cout << number1 << " is smaller than "
		<< number2 << "\n";

	if (number1 > number2)
		cout << number1 << " is bigger than "
		<< number2 << "\n";

	if (number1 == number2)
		cout << number1 << " equals to "
		<< number2 << "\n";
	return 0;
}