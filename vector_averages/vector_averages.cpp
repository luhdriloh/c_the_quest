#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

double find_average(vector<double> numbers);

int main ()
{
	vector<double> values;
	double average;
	double current_value;

	while(cin >> current_value)
		values.push_back(current_value);

	cout << "the average of these numbers is "
			 << find_average(values) << endl;

	return 0;

}

double find_average(vector<double> numbers)
{
	double sum = 0;

	// vector<double>::size_type gives us the size of a vector no
	// matter what size it is
	typedef vector<double>::size_type vector_size;
	vector_size number_size = numbers.size();


	for(const double &i : numbers)
		sum += i;

	return sum / number_size;
}