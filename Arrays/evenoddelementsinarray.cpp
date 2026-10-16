//Write A Program to count the number of even & odd elements in an array
#include<iostream>
using namespace std;
int main(){
    int arr[5],key,evencount=0,oddcount=0;
    cout<<"Enter array elements:";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }

    cout<<"Even numbers: "<<evencount<<endl;
    cout<<"Odd numbers: "<<oddcount;
    
}
