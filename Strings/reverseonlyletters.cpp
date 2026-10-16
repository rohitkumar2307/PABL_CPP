#include <iostream>
#include <string>
#include<cctype>
using namespace std;
int main()
{
    string s="h3@ess*fyz";
    // getline(cin, s);
    int n=s.length();
    int i=0;
    int j=n-1;
    while (i<j){
        if (!isalpha(s[i])){
            i++;
        }
        else if (!isalpha(s[j])){
            j--;
        }
        else{
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
    // for (int i = 0,j=n-1; i < j; )
    // {
    //     if (!isalpha(s[i])){
    //         i++;
    //     }
    //     else if (!isalpha(s[j])){
    //         j--;
    //     }
    //     else{
    //         swap(s[i],s[j]);
    //         i++;
    //         j--;
    //     }
    // }

    
    cout << endl;
    cout << s;
}