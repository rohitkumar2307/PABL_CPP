// Shift 2D grid k times
#include <iostream>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m;
    cout << "Enter K: ";
    cin >> k;
    int arr[n][m];
    int shifted[n][m];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int new_count = count + k;
            int newrow = new_count / m;
            int newcol = new_count % m;
            shifted[newrow][newcol] = arr[i][j];
        }
    }

    cout << "Shifted array:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << shifted[i][j] << " ";
        }
        cout << endl;
    }
}