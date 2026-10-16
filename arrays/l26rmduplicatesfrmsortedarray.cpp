#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int x=1;
    int n=nums.size();
    for (int i = 1; i <=n-1; i++){
        if(nums[i]!=nums[x-1]){
            nums[x]=nums[i];
            x++;
        }
    }
    return x;
}
int main(){
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums)<<endl;
    for(int x:nums){
        cout<<x<<" ";
    }
}