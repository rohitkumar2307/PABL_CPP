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
    // COPY USED
    // int prefixsum[n];
    // cout<<endl<<"Prefix Array:"<<endl;
    // prefixsum[0]=arr[0];
    // for (int i = 1; i < n; i++)
    // { 
    //     prefixsum[i]=prefixsum[i-1]+arr[i];
    // }
    // ORIGINAL ARRAY CONVERTED
    cout<<endl<<"Prefix Array:"<<endl;
    for (int i = 1; i < n; i++)
    { 
        arr[i]=arr[i-1]+arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<prefixsum[i]<<" ";
    // }
}