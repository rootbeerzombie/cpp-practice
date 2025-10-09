#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare an array of 10 integers
    int nums[10];

    // Step 2: Ask the user to input 10 numbers
    cout << "Input 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> nums[i];
    }

    // Step 3: Create counters and sums
    int evenCount = 0;
    int oddCount = 0;
    int evenSum = 0;
    int oddSum = 0;

    // Step 4: Loop through the array
    for (int i = 0; i < 10; i++) {
        if (nums[i] % 2 == 0) /* check if nums[i] is even */ {
            evenCount++;
            evenSum += nums[i];
            // update evenCount and evenSum
        } else {
            oddCount++;
            oddSum += nums[i];
            // update oddCount and oddSum
        }
    }

    // Step 5: Print results
    cout << "Evens: " << evenCount << " numbers, sum = " << evenSum << endl;
    cout << "Odds: " << oddCount << " numbers, sum = " << oddSum << endl;

    return 0;
}
