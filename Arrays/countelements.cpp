#include<iostream>
using namespace std;
int main(){
    int arr[5],key,count=0;
    cout<<"Enter array elements:";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key:";
    cin>>key;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]==key){
            count++;
        }
    }

    cout<<count;
    
}
