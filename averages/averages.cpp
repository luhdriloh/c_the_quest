#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main () 
{
	double sum = 0;

	cout << "please enter a number followed by enter 5 times" << endl;

	for (int i = 0; i < 5; i++)
	{
		double number;
		cin >> number;
		sum += number;
	}

	cout << "the average of these numbers is "
		 << sum / 5 << endl;
}