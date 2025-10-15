#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;

public:
    
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    Complex sum = c1 + c2;

    cout << "Sum of complex numbers: ";
    sum.display();

    return 0;
}
