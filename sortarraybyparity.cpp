#include<iostream>
using namespace std;
int main(){
    int nums[]={6,3,5,1,2,4};
    int n=6;
    int left = 0, right = n - 1;

    while (left < right) {

        if (nums[left] % 2 != 0 && nums[right] % 2 == 0) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
        }

        if (nums[left] % 2 == 0)
            left++;

        if (nums[right] % 2 != 0)
            right--;
    }

    for (int x : nums)
    {
        cout<<x<<" ";
    }
}