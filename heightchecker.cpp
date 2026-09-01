// Height Checker
// 1 2 3 4 1 5
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i]=arr[i];
    }

// sorting
    for (int i = 0; i < (n-1); i++)
    {
        for (int j = 0; j < (n-i-1); j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }   
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr2<<" ";
    }
    
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==arr2[i])
        {
            count++;
        }
    }
    
}