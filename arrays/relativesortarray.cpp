#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};
    
    vector<int> result;
    
    for (int x : arr2) {
    
        for (int i = 0; i < arr1.size(); i++) {
    
            if (arr1[i] == x) {
                result.push_back(x);
                arr1[i] = -1;
            }
        }
    }
    
    sort(arr1.begin(), arr1.end()); 
    
    for (int x : arr1) {
        if (x != -1)
            result.push_back(x);
    }
    
    for (int x : result)
    cout << x << " ";

    return 0;
}