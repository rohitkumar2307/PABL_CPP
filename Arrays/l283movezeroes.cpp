#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int n=nums.size();
    int noz=0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]!=0) v.push_back(nums[i]);
        else noz++;
    }
    for(int i=1;i<=noz;i++){
        v.push_back(0);
    }
    for(int i=0;i<n;i++){
        nums[i]=v[i];
    }
}
int main(){
    vector<int> nums={0,1,0,3,12};
    moveZeroes(nums);
    for(int x:nums){
        cout<<x<<" ";
    }
}