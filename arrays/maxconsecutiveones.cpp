#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 1, 0, 1, 1, 1};
    int n = 6;
    int count = 0;
    int max_count = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
        }
        else {
            count = 0;
        }
        
        if (count > max_count)
        max_count = count;
    }
    cout<<"Max Consecutive ones:"<<max_count;
    return 0;
}