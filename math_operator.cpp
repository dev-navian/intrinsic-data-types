#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;
    char math_op;
    
    cout << "Please input two operands: ";
    cin >> num1 >> num2;
    
    cout << "Please input an operator: ";
    cin >> math_op;
    
    
    switch(math_op) {
        case '*':
            result = num1 * num2;
            cout << "Multiplying " << num1 << " and " << num2 << " = " << result;
            break;
        case '+':
            result = num1 + num2;
            cout << "Adding " << num1 << " and " << num2 << " = " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Subtracting " << num1 << " and " << num2 << " = " << result;
            break;
        case '/':
            result = num1 / num2;
            cout << "Dividing " << num1 << " and " << num2 << " = " << result;
            break;
        default:
            cout << "Please try again.";
    }
    
}
