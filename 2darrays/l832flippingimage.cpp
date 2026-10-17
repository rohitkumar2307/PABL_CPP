//flipping an image
// first reverse horizontally then invert like change 0 to 1 && 1 to 0
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    cout<<"Enter array elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    cout<<endl;
    cout<<"old Array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    // flipping horizontally
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n/2; j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][n-j-1];
            arr[i][n-j-1]=temp;
        }
        
    }
    // now invert 0 to 1 & 1 to 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j]==0) 
                arr[i][j]=1;
            else
                arr[i][j]=0;
        }
        
    }

    
    cout<<endl<<"new array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}