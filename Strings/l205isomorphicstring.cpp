#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool isIsomorphic(string s, string t) {
        if (t.length()!= s.length())
        {
            return false;
        }
        vector<int> v(150,1000);
        for (int i = 0; i < s.length(); i++)
        {
            int idx=(int)s[i];
            if(v[idx]==1000) v[idx]=s[i]-t[i];
            else if(v[idx]!=s[i]-t[i]) return false;
        }
        for(int i=0;i<150;i++) v[i]=1000;
        for (int i = 0; i < t.length(); i++)
        {
            int idx=(int)t[i];
            if(v[idx]==1000) v[idx]=t[i]-s[i];
            else if(v[idx]!=t[i]-s[i]) return false;
        }
        return true;
    }

int main(){
    string s="title";
    string t="paper";
    cout<<isIsomorphic(s,t);
}