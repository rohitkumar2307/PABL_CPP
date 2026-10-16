// Write a program to reverse every word in a string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    int start = 0;
    int end = 0;
    while (end <= n){
        if (end == n || s[end] == ' '){
            int i = start;
            int j = end - 1;
            while (i < j)
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            start = end + 1;
        }
        end++;
    }
    cout << s;

}