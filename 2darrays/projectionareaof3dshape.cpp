// Projection area of 3d shapes
// given a matrix find the maximum element of each row.
// and then find sum of these elements.
// then column maximum & it's sum.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    //xy o or 1 check
    //xz max(col max)
    //yz max(row max)
    // vector<int> arr ={2,0,0,4};
    
    // int max =arr[0];
    // for (int i = 0; i < arr.size(); i++)
    // {
    //      if (arr[i]>max)
    //     {
    //         max=arr[i];
    //     }
    // }
    // cout<<max;
    vector<vector<int>> arr ={{2,0},{0,4}};
    
    int max1 =arr[0][0];
    int max2 =arr[0][0];
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i][j]>max1)
            {
                max1=arr[i][j];
            }
            if (arr[i+1][j+1]>max2)
            {
                max2=arr[i+1][j+1];
            }
            
        }
    }
    cout<<max1<<" "<<max2;
}