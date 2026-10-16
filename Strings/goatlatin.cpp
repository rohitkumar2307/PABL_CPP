#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    getline(cin, s1);
    int n=s1.length();
    if (s1[0]=='a' || s1[0]=='A' ||
        s1[0]=='e' || s1[0]=='E' ||
        s1[0]=='i' || s1[0]=='I' ||
        s1[0]=='o' || s1[0]=='O' ||
        s1[0]=='u' || s1[0]=='U')
    {
        s1=s1+"ma";
    }
    else{
        
        s1=s1+s1[0];
        s1=s1.substr(1);
        s1=s1+"ma";
    }
    cout<<s1;
}