#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    for (int i = 0; i <=n-1; i++)
    {
        for (int j = 0; j<=n-1; j++)
        {
            cin>>v[i][j];
        }
    }
    cout<<"original"<<endl;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    // first transpose
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            int temp=v[i][j];
            v[i][j]=v[j][i];
            v[j][i]=temp;
        }
        
    }
    // then row reverse
    for (int k=0;k<n;k++){
        int i=0;
        int j=n-1;
        while(i<j){
            int temp=v[k][i];
            v[k][i]=v[k][j];
            v[k][j]=temp;
            i++;
            j--;
        }

    }

    cout<<"AFTER ROTATING"<<endl;
    for (int i = 0; i <=n-1; i++)
    {
        for (int j = 0; j<=n-1; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}