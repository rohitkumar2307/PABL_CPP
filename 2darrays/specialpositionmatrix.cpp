//Special Position in a matrix
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
    int r_count[n];
    int c_count[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j]==1)
            {
                r_count[i]++;
                c_count[j]++;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<r_count[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<c_count[i]<<" ";
    }
}