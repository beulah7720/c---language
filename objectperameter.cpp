#include<iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Display function
    void display() const {
        cout << "Value: " << value << endl;
    }

    // Unary minus operator overloading
    Number operator-() {
        return Number(-value);
    }

    // Binary plus operator overloading
    Number operator+(const Number &obj) {
        return Number(value + obj.value);
    }
};

int main() {
    Number n1(10), n2(20), result;

    cout << "Original values:" << endl;
    n1.display();
    n2.display();

    // Binary operator
    result = n1 + n2;
    cout << "After Binary + operator (n1 + n2):" << endl;
    result.display();

    // Unary operator
    result = -n1;
    cout << "After Unary - operator (-n1):" << endl;
    result.display();

    return 0;
}
