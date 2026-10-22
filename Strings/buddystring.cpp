// aa_bb_cc -> aa_bb_cc
//   y  x
//   x  y
// aabcc -> acbac
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s1 ="aaxbbycc";
    string s2 ="aaybbxcc";
    int n=s1.length();
    vector<int> v;
    
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(s1[i]!=s2[i]){
            count++;
            v.push_back(i);
        }
    }
    if(count==2){
        if(s1[v[0]]==s2[v[1]] && s1[v[1]==s2[v[0]]]){
            cout<<"buddy";
        }
    }
    // if(count==2){
    //    swap(s1[v[0]],s1[v[1]]);
    //    if(s1==s2){
    //     cout<<"buddy";
    //     }
    // }
}