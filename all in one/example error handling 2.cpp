#include <iostream>
#include <vector>
using namespace std;
void checkArrayValues(const std::vector<int>& arr, int k) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > k) {
            throw runtime_error("Value exceeds " + to_string(k));
        }
    }
}

int main() {
    vector<int> arr = {10, 12, 14, 16, 18};
    int k = 15;

    try {
        checkArrayValues(arr, k);
    } catch (const exception& e) {
        cerr << "Caught exception: " << e.what() << '\n';
    }

    return 0;
}
