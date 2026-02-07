// Prefix Sum
#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixSum(const vector<int>& arr) {
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    return prefix;
}

int main() {
    vector<int> arr = {2, 4, 6, 8};
    vector<int> result = prefixSum(arr);

    cout << "Prefix Sum: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
