#include <iostream>
using namespace std;

int main() {

    int nums[10];

    cout << "Input 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> nums[i];

    }


    int maxNum = nums[0];
    int minNum = nums[0];


    for (int i = 1; i < 10; i++) {

        if (nums[i] > maxNum) {
            maxNum = nums[i];

        }

        if (nums[i] < minNum) {
            minNum = nums[i];

        }
    }

    cout << "Maximum number = " << maxNum << endl;
    cout << "Minimum number = " << minNum << endl;

    return 0;
}