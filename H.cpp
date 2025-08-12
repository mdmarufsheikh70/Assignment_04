#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;

    vector<int>A(n);
    for(int i = 0; i < n; i ++)
    {
        cin >> A[i];
    }

    for(int i = 0; i <= q - p; i++)
    {
        int tmp = A[p - 1 + i];
        A[p - 1 + i] = A[r - 1 + i];
        A[r - 1 + i] = tmp;
    }

    for(int i = 0 ; i < n; i++)
    {
        cout << A[i] << " " ;
    }
    return 0;
}