#include <iostream>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    float divide(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cout << "Error: Division by zero!" << std::endl;
            return 0;
        }
    }

    double power(double base, double exponent) {
        return pow(base, exponent);
    }
};

int main() {
    Calculator calc;
    
    std::cout << "Addition: " << calc.add(5, 3) << std::endl;
    std::cout << "Multiplication: " << calc.multiply(5, 3) << std::endl;
    std::cout << "Division: " << calc.divide(10.0, 2.0) << std::endl;
    std::cout << "Power: " << calc.power(2.0, 3.0) << std::endl;

    return 0;
}
