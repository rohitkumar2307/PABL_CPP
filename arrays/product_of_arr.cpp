#include<iostream>
using namespace std;
int main(){
    int s=1;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"output:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        s*=arr[i];
    }
    cout<<"sum="<<s;
}