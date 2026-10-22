#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="homelander";
    string t="landerhome";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<s<<endl;
    cout<<t;
    if (s==t)
    {
        cout<<"anagram";
    }
    else cout<<"not anagram";
}