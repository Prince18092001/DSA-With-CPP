// Suffix Sum
#include <iostream>
#include <vector>
using namespace std;

vector<int> suffixSum(const vector<int>& arr) {
    vector<int> suffix(arr.size());
    suffix[arr.size() - 1] = arr[arr.size() - 1];
    for (int i = arr.size() - 2; i >= 0; --i) {
        suffix[i] = suffix[i + 1] + arr[i];
    }
    return suffix;
}

int main() {
    vector<int> arr = {2, 4, 6, 8};
    vector<int> result = suffixSum(arr);

    cout << "Suffix Sum: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
