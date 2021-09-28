#include <iostream>
using namespace std;

void input();
void add(int num1, int num2);

int main () {
  
  input();
  
}

void add(int num1, int num2) {
  int result;
  result = num1 + num2;
  cout << "The two numbers added = " << result << endl;
}

void input() {
  int first, second;
  
  cout << "Enter any two numbers: ";
  
  cin >> first >> second;
  
  add(first, second);
}
