// Lab - 12: Implement Dynamic Memory Allocation and Deallocation

#include <iostream>
#include <string>

class car_comp {
    std::string *arr;
    int size;

public:
    car_comp() = default;

    car_comp(int size) {
        this->size = size;
        arr = new std::string[size];
    }

    ~car_comp() { delete[] arr; }

    std::string &operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            std::cout << "Array index out of bound!" << std::endl;
            return arr[0];
        }
        return arr[index];
    }

    void display() {
        std::cout << "\nCar Companies\n";
        for (int i = 0; i < size; i++) {
            std::cout << "Company " << i + 1 << ": " << arr[i] << std::endl;
        }
        std::cout << std::endl;
    }
};


int main() {
    int size;
    std::string c;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    car_comp PS(size);

    for (int i = 0; i < size; i++) {
        std::cout << "Enter the Car Company: ";
        std::cin >> c;
        PS[i] = c;
    }

    PS.display();
    return 0;
}