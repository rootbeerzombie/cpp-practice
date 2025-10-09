#include <iostream>
using namespace std;

int main() {
    int nums[10];

    cout << "Input 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> nums[i];
    }

    cout << "Even numbers: ";
    for (int i = 0; i < 10; i++) {
        if (nums[i] % 2 == 0) {
            cout << nums[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
