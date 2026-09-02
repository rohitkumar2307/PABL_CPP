// Toeplitz Matrix
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
    cout<<"Array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int c=0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i][j]!=arr[i-1][j-1])
            {
                c=1;
                break;
            }
        }
        
    }
    if (c)
    {
        cout<<"Not toeplitz";
    }
    else{
        cout<<"toeplitz";
    }    
}