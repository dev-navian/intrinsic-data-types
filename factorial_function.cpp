#include <iostream>

void factorial(int num);

int main() {
    int userchoice;
    
    std::cout << "Enter any number: ";
    std::cin >> userchoice;
    
    factorial(userchoice);
    
    return 0;
}

void factorial(int num) {
    int result = 1;
    
    for (int current = 1; current <= num; current++) {
        result *= current;
       // std::cout << result << std::endl;
    }
    
    std::cout << num << " factorial is " << result << std::endl;
}
