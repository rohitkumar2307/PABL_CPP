#include<iostream>
#include<vector>
using namespace std;
vector<int> mergesort(vector<int> v1,int m,vector<int> v2,int n){
    int i=(m-n)-1,j=n-1,k=m-1;
    while(i>=0 && j>=0){
        if (v1[i]>=v2[j])
        {
            v1[k]=v1[i];
            i--;
        }
        else if (v1[i]<v2[j]){
            v1[k] = v2[j];
            j--;
        }
        k--;
    }
    //remaining first elements
    while(j>=0){
        v1[k]=v2[j];
        j--;
        k--;
    }
    return v1;
}

int main(){
    vector<int> v1={1,2,8,10,50,60,0,0,0,0};
    int m=v1.size();
    vector<int> v2={2,3,9,16};
    int n=v2.size();
    vector<int> result=mergesort(v1,m,v2,n);
    for(int x:result) cout<<x<<" ";
}