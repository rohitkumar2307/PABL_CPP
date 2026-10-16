// write a program to find third maximum in array.
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
    int max=arr[0];
    int max2=arr[0];
    int max3=arr[0];
    cout<<"array:";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max3=max2;
            max2=max;
            max=arr[i];
        }
        else if (arr[i]>max2)
        {
            max3=max2;
            max2=arr[i];
        }
        else if (arr[i]>max3){
            max3=arr[i];
        }
    }
    
    cout<<"Maximum element:"<<max<<endl;
    cout<<"2nd Maximum element:"<<max2<<endl;
    cout<<"3rd Maximum element:"<<max3;
    
}