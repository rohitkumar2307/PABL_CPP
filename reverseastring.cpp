#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n=s.length();
    // int i=0;
    // int j=n-1;
    // while (i<j){
    //     swap(s[i],s[j]);
    //     i++;
    //     j--;
    // }
    for (int i = 0,j=n-1; i < j; i++,j--)
    {
        swap(s[i],s[j]);
    }
    // for (int i = 0; i < n/2; i++)
    // {
    //     swap(s[i],s[n-1-i]);
    // }
    
    cout << endl;
    cout << s;
}