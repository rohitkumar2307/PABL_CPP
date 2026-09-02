#include <iostream>
using namespace std;

int main() {

    int arr[] = {4,3,2,7,8,2,3,1};
    int n = 8;

    for (int num = 1; num <= n; num++) {

        int found=0;

        for (int i = 0; i < n; i++) {

            if (arr[i] == num) {
                found = 1;
                break;
            }
        }

        if (!found)
            cout << num << " ";
    }

    return 0;
}