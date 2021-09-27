#include <iostream>
#include <cstring>
using namespace std;

typedef struct {
	string wordArray[10];
	string largestWord;
	int currentSize;
	int previousSize = 0;
} UserInput;

int main() {
	UserInput user;

	cout << "Enter 10 words here" << endl;

	for (int i = 1; i <= 10; i++) {
		cout << "Word " << i << ": ";
		cin >> user.wordArray[i];

		user.currentSize = user.wordArray[i].size();

		if (user.currentSize > user.previousSize) {
			user.previousSize = user.currentSize;
			user.largestWord = user.wordArray[i];
		}

	}

	cout << "The largest word is: " << user.largestWord << " with a length of " << user.previousSize << endl;
}
