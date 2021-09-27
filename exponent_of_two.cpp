#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int counter = 0;
	
	cout << "Enter a number to get the first 10 powers of it: ";
	cin >> counter;

	while (cout << pow(2, counter) << endl, counter++, counter < 10) { }

}

