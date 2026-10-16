#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter array elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    int suffixsum[n];
    cout<<endl<<"Suffix Array:"<<endl;
    suffixsum[n-1]=arr[n-1];
    for (int i = n-2; i >= 0; i--)
    { 
        suffixsum[i]=suffixsum[i+1]+arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<suffixsum[i]<<" ";
    }
}