#include <iostream>
///change why on num2
int main() {
    char operation;
    double num1;
    double    num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

   
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    
    switch (operation) {
    case '+':
        std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
        break;
    case '*':
        std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
        break;
    case '/':
        if (num2 != 0) {
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
        }
        else {
            std::cout << "Error: Cannot divide by zero." << std::endl;
        }
        break;
    default:
        std::cout << "Error: Invalid operation." << std::endl;
        break;
    }

    return 0;
}
