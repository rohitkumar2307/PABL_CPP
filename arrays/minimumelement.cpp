#include<iostream>
using namespace std;
int main(){
    int arr[]={4,3,7,9,78,90,5};
    int max1=arr[0];
    int max2=0;
    int n=sizeof(arr)/4;
    for (int i = 1; i <= n-1; i++){
        if(max1<arr[i]){
            max1=arr[i];
        }
    }
    for (int i = 0; i < n; i++){
        if(max2<arr[i] && arr[i]!=max1){
            max2=arr[i];
        }
    }
    cout<<max1<<endl;
    cout<<max2;
}