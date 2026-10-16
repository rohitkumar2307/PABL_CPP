#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter array elements:";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    cout<<"OG array:";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int min=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    cout<<"Maximum element:"<<max<<endl;
    cout<<"Minimum element:"<<min;
    
}