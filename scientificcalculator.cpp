#include <iostream>
#include <cmath>

class Calculator {
public:
    Calculator() {}

    double evaluateExpression(const std::string& expression);

    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    double modulo(double a, double b);

    double sin(double angle);
    double cos(double angle);
    double tan(double angle);
    double log(double base, double value);

private:
    void handleInvalidInput();
    void handleUndefinedResult();
};

double Calculator::evaluateExpression(const std::string& expression) {
    double result = 0.0;

    return result;
}

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b != 0.0) {
        return a / b;
    } else {
        handleUndefinedResult();
        return 0.0;
    }
}

double Calculator::modulo(double a, double b) {
    if (b != 0.0) {
        return std::fmod(a, b);
    } else {
        handleUndefinedResult();
        return 0.0;
    }
}

double Calculator::sin(double angle) {
    return std::sin(angle);
}

double Calculator::cos(double angle) {
    return std::cos(angle);
}

double Calculator::tan(double angle) {
    return std::tan(angle);
}

double Calculator::log(double base, double value) {
    if (base > 0 && base != 1 && value > 0) {
        return std::log(value) / std::log(base);
    } else {
        handleInvalidInput();
        return 0.0;
    }
}

void Calculator::handleInvalidInput() {
    std::cerr << "Error: Invalid input.\n";
}

void Calculator::handleUndefinedResult() {
    std::cerr << "Error: Undefined result (division by zero).\n";
}

int main() {
    Calculator calculator;
    std::string expression = "2 + 3 * sin(45)";
    double result = calculator.evaluateExpression(expression);
    std::cout << "Result: " << result << std::endl;

    return 0;
}

