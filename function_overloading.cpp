#include <iostream>
using namespace std;

void output(int num);
void output(float digit);
void output(long longvar);
void output(char character);
void output(string var);

int main() {
    
    output(334);
    output(2211.5566f);
    output(233563463);
    output('x');
    output("hello from this side");
}

void output(int num) {
    cout << num << endl;
}

void output(float digit) {
    cout << digit << endl;
}

void output(long longvar) {
    cout << longvar << endl;
}

void output(char character) {
    cout << character << endl;
}

void output(string var) {
    cout << var << endl;
}
