#include <iostream>
#include <vector>
using namespace std;
int bsearch(vector<int> v, int target) {
    int n = v.size();
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low+high) / 2;

        if (v[mid] == target)
            return 1;
        else if (target > v[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}

int main() {
    vector<int> v = {2, 4, 7, 12, 18, 20};
    int target = 18;
    if (bsearch(v,target))
    {
        cout<<"found";
    }
    else cout<<"not found";
}
