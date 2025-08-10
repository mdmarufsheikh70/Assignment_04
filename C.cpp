#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, k;
    cin >> n >> k;

    vector<int>A(n);
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

   
    vector<int>B(n);
    for(int i = 0; i < k; i++)
    {
        B[i] = A[n - k + i];
    }

    for(int i = k; i < n; i++)
    {
        B[i] = A[i - k];
    }

    for(int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
    }
    return 0;
}