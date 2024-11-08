// Lab - 11: Implement Subscript Operator Overloading

#include <iostream>
#include <string>
#include <cmath>

class perfect_squares {
    int *arr, size;

public:
    perfect_squares() = default;

    perfect_squares(int size) {
        this->size = size;
        arr = new int[size];
    }

    ~perfect_squares() { delete[] arr; }

    int &operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            std::cout << "Array index out of bound!" << std::endl;
            return arr[0];
        }
        return arr[index];
    }

    void display() {
        std::cout << "\nPERFECT SQUARES\n";
        for (int i = 0; i < size; i++) {
            std::cout << "Perfect Square of " << sqrt(arr[i]) << " = " << arr[i] << std::endl;
        }
        std::cout << std::endl;
    }
};


int main() {
    int size, num;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    perfect_squares PS(size);

    for (int i = 0; i < size; i++) {
        std::cout << "Enter the number: ";
        std::cin >> num;
        PS[i] = num * num;
    }

    PS.display();
}