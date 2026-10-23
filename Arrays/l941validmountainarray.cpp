
#include <iostream>
#include <vector>
using namespace std;

int validmarray(vector<int> arr, int n) {
    if (n < 3) {
        return 0;
    }

    int i = 1;
    int j = n - 2;

    while (i < n && arr[i] > arr[i - 1]) {
        i++;
    }

    while (j >= 0 && arr[j] > arr[j + 1]) {
        j--;
    }

    if (i - 1 == j + 1 && i > 1 && j < n - 2) {
        return 1;
    }

    return 0;
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 5, 3, 2};
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    if (validmarray(arr, n)) {
        cout << "Valid mountain array";
    } else {
        cout << "Not a valid mountain array";
    }

    return 0;
}
