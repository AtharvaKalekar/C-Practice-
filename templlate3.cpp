#include <iostream>
using namespace std;


template <typename T>
class Multiplier {
private:
    T num1;
    T num2;

public:
    Multiplier(T a, T b) : num1(a), num2(b) {}

    T multiply() {
        return num1 * num2;
    }

    void displayResult() {
        cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply() << std::endl;
    }
};

int main() {
    Multiplier<int> intMultiplier(5, 10);
    intMultiplier.displayResult();

    Multiplier<double> doubleMultiplier(2.5, 3.5);
    doubleMultiplier.displayResult();

    return 0;
}

