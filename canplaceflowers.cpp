#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,0,0,0,1};
    int n = 5;
    
    int flowers = 1;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
    
        if (arr[i] == 0) {
    
            bool leftEmpty = (i == 0 || arr[i - 1] == 0);
            bool rightEmpty = (i == n - 1 || arr[i + 1] == 0);
    
            if (leftEmpty && rightEmpty) {
                arr[i] = 1;
                count++;
            }
        }
    }

    if (count)
    cout << "true";
    else
    cout << "false";

    return 0;
}