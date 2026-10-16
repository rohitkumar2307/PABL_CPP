// abc -> aaabbcc
// abcc -> abbcc
// abc -> aabc
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="abc";
    string s2="aabbcc";
    int i=0,j=0;
    int n=s1.length();
    while (j<n)
    {
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
        else{
            if(s1[i-1]==s2[j])
                j++;
        }
        
    }
    
}