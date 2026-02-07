// Majority Element
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Boyer-Moore Voting Algorithm
    int candidate = 0, count = 0;

    // Phase 1: Find a candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else {
            if (arr[i] == candidate)
                count++;
            else
                count--;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;  // Reset count
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2) {
        cout << "Candidate: " << candidate << endl;
    } else {
        cout << "-1" << endl; // No majority element
    }

    return 0;
}
