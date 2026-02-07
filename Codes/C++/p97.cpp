//print all subarrays
#include <iostream>
#include <vector>
using namespace std;

void printAllSubarrays(const vector<int>& arr) {
    int n = arr.size();
    for (int size = 1; size <= n; ++size) { // subarray size
        cout << "Subarrays of size " << size << ":\n";
        for (int start = 0; start <= n - size; ++start) {
            for (int i = start; i < start + size; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4}; // Example array
    printAllSubarrays(arr);
    return 0;
}
