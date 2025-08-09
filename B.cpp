#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int>A(7*n);
    vector<int>B(n, 0);

    for(int i = 0; i < 7 * n; i++)
    {
        cin >> A[i];
    }

    int j = 0, k = 0;
    for(int i = 0; i < 7 * n; i++)
    {
        B[k] += A[i];
        j++;
        if(j == 7)
        {
            j = 0;
            k++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
    }

    cout << "\n";
    return 0;
}
