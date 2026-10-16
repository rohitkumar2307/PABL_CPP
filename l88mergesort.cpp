#include<iostream>
#include<vector>
using namespace std;
vector<int> mergesort(vector<int> v1,int m,vector<int> v2,int n){
    int i=m-1,j=n-1,k=(m+n)-1;
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
    while(i>=0){
        v1[k]=v1[i];
        i--;
        k--;
    }
    return v1;
}

int main(){
    vector<int> v1={1,2,4,5,8,0,0,0,0,0};
    int m=5,n=5;
    vector<int> v2={2,3,6,7,10};
    vector<int> result=mergesort(v1,m,v2,n);
    for(int x:result) cout<<x<<" ";
}