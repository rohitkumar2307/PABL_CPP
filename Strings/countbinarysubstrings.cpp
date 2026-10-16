#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s="1100000110";
    int n=s.length();
    int j=0;
    vector<int> block = {1};
    for (int i = 1; i < n; i++){
        if (s[i]==s[i-1]){
            block[j]++;
        }
        else{
            block.push_back(1);
            j++;
        }
    }
    for (int i = 0; i < block.size(); i++)
    {
        cout<<block[i]<<" ";
    }
    int total=0;
    for (int i = 1; i < block.size(); i++)
    {
        total+=min(block[i],block[i-1]);
    }
    cout<<endl<<"total substring="<<total;

    for (int i = 1; i < block.size(); i++){
    int count = min(block[i], block[i - 1]);

    int start = 0;

    for (int k = 0; k < i - 1; k++)
    {
        start += block[k];
    }

    start += block[i - 1] - count;

    for (int j = 0; j < count; j++)
    {
        cout << s.substr(start + j, count * 2) << endl;
    }

    total += count;
    }

}