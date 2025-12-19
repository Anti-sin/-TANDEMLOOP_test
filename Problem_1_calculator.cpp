#include <iostream>
#include <string>
using namespace std;

class Calculator {
    double a, b;
    string ops;

public:
    Calculator(double i, double j, string operation) {
        a = i;
        b = j;
        ops = operation;
    }

    void calculate() {
        if (ops == "add" || ops== "+") {
            cout << "Result: " << a + b;
        }
        else if (ops == "subtract" || ops==  "-") {
            cout << "Result: " << a - b;
        }
        else if (ops == "multiply" || ops== "*") {
            cout << "Result: " << a * b;
        }
        else if (ops == "divide" || ops== "/") {
            if (b == 0) {
                cout << "Error: Division by zero";
            } else {
                cout << "Result: " << a / b;
            }
        }
        else {
            cout << "Invalid operation";
        }
    }
};

int main() {
    double a, b;
    string operation;
    cout<<"Enter the first number"<<endl;
    cin >> a ;
    cout<<"Enter the second number"<<endl;
    cin >> b;
    cout<<"Enter the operation to be performed"<<endl;
    cin>> operation;

    Calculator calc(a, b, operation);
    calc.calculate();

    return 0;
}