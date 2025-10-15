#include <iostream>
using namespace std;

class Math {
public:
    // Static function to calculate square
    static int square(int num) {
        return num * num;
    }

    // Static function to calculate cube
    static int cube(int num) {
        return num * num * num;
    }
};

int main() {
    int number = 5;

    cout << "Square of " << number << " is: " << Math::square(number) << endl;
    cout << "Cube of " << number << " is: " << Math::cube(number) << endl;

    return 0;
}
