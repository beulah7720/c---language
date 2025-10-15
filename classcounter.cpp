#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member declaration

public:
    Counter() {
        count++;  // Increment count whenever an object is created
    }

    static int getCount() {
        return count;  // Static member function to access count
    }
};

// Static member must be defined outside the class
int Counter::count = 0;

int main() {
    cout << "Initial count: " << Counter::getCount() << endl;

    Counter c1;
    Counter c2;
    Counter c3;

    cout << "Count after creating 3 objects: " << Counter::getCount() << endl;

    return 0;
}
