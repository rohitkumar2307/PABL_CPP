#include<iostream>
using namespace std;
int main(){
    int arr[5],brr[5];
    cout<<"Enter array elements:";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < 5; i++){
        int count=0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[i]==arr[j]){
                count++;
            }
            brr[i]=count;
        }
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<brr[i]<<" ";
    }
    
}
