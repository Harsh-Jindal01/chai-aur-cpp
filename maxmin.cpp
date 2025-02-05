#include <iostream>
using namespace std;
int main() {
    int n, num, max, min;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive number of elements." << endl;
        return 1;
    }
    cout << "Enter number 1: ";
    cin >> num;
    max = min = num;
    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num > max) max = num;
        if (num < min) min = num;
    }
    cout << "The maximum value is: " << max << endl;
    cout << "The minimum value is: " << min << endl;
    return 0;
}