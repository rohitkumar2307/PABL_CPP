#include<iostream>
#include <vector>
using namespace std;
int main(){
    int m=3;
    vector<vector<int>> matrix(m,vector<int>(m));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    cout<<"OG MATRIX"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for (int i = 0; i <=m-1; i++)
    {
        for (int j = i+1; j <=m-1; j++)
        {
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
        
    }
    cout<<"TRANSPOSE"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}