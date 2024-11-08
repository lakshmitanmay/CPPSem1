// Lab - 10: Implement Unary and Binary operator overloading 

#include <iostream>

class INT {
    int x;

public:
    INT() {}
    INT(int x) { this->x = x; }

    void display() { std::cout << "Result: " << x << std::endl; }

    // Unary Operator Overloading
    friend void operator++(INT &X);
    friend void operator--(INT &X);
    friend void operator-(INT &X);

    // Binary Operator Overloading
    friend INT operator+(INT X, INT Y);
    friend INT operator-(INT X, INT Y);
    friend INT operator*(INT X, INT Y);
    friend INT operator/(INT X, INT Y);
    friend INT operator%(INT X, INT Y);

    friend int menu();
};

void operator++(INT &X) { X.x = X.x + 1; }
void operator--(INT &X) { X.x = X.x - 1; }
void operator-(INT &X) { X.x = -(X.x); }


INT operator+(INT X, INT Y) {
    INT temp;
    temp.x = X.x + Y.x;
    return temp;
}

INT operator-(INT X, INT Y) {
    INT temp;
    temp.x = X.x - Y.x;
    return temp;
}

INT operator*(INT X, INT Y) {
    INT temp;
    temp.x = X.x * Y.x;
    return temp;
}

INT operator/(INT X, INT Y) {
    INT temp;
    temp.x = X.x / Y.x;
    return temp;
}

INT operator%(INT X, INT Y) {
    INT temp;
    temp.x = X.x % Y.x;
    return temp;
}

int menu() {
    int option;
    std::cout << "1 - Addition" << std::endl;
    std::cout << "2 - Subtraction" << std::endl;
    std::cout << "3 - Division" << std::endl;
    std::cout << "4 - Multiplication" << std::endl;
    std::cout << "5 - Modulus" << std::endl;
    std::cout << "6 - Increment by 1" << std::endl;
    std::cout << "7 - Decrement by 1" << std::endl;
    std::cout << "8 - Negation" << std::endl;
    std::cout << "9 - Exit" << std::endl;
    std::cout << "Select an option: ";
    std::cin >> option;
    std::cout << "\n";
    return option;
}

int main() {
    int num1, num2, option;
    INT X[5], Z;

    std::cout << "SIMPLE CALCULATOR" << std::endl;

    do {
        std::cout << "\nEnter first number: ";
        std::cin >> num1;
        option = menu();
        X[0] = INT(num1);
        switch (option) {
            case 1: {
                std::cout << "Enter second number: ";
                std::cin >> num2;
                X[1] = num2;
                Z = X[0] + X[1];
                Z.display();
                break;
            }

            case 2: {
                std::cout << "Enter second number: ";
                std::cin >> num2;
                X[1] = num2;
                Z = X[0] - X[1];
                Z.display();
                break;
            }

            case 3: {
                std::cout << "Enter second number: ";
                std::cin >> num2;
                X[1] = num2;
                Z = X[0] / X[1];
                Z.display();
                break;
            }

            case 4: {
                std::cout << "Enter second number: ";
                std::cin >> num2;
                X[1] = num2;
                Z = X[0] * X[1];
                Z.display();
                break;
            }

            case 5: {
                std::cout << "Enter second number: ";
                std::cin >> num2;
                X[1] = num2;
                Z = X[0] % X[1];
                Z.display();
                break;
            }

            case 6: {
                ++X[0];
                X[0].display();
                break;
            }

            case 7: {
                --X[0];
                X[0].display();
                break;
            }

            case 8: {
                -X[0];
                X[0].display();
                break;
            }

            case 9: {
                break;
            }

            default: {
                std::cout << "Invalid choice" << std::endl;
                break;
            }
        }
    } while (option != 9);
    return 0;
}