#include<iostream>
#include<cassert>
#include<vector>
using namespace std;
int removeduplicates(vector<int> v){
    int x=1;
    int n=v.size();
    for (int i = 1; i <=n-1; i++){
        if(v[i]!=v[x-1]){
            v[x]=v[i];
            x++;
        }
    }
    return x;
}
int main(){
    vector<int> nums = {1,1,2}; // Input array
    vector<int> expectedNums = {1,2}; // The expected answer with correct length

    int k = removeduplicates(nums); // Calls your implementation

    cout<<k<<" Unique elemts";
}