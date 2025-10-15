#include <iostream>
using namespace std;

// Function declaration
int addNumbers(int a, int b);
int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call the outside function
    int sum = addNumbers(num1, num2);

    cout << "The sum is: " << sum << endl;

    return 0;
}
int addNumbers(int a, int b) {
    return a + b;
}
