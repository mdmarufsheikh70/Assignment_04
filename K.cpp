#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    int m = ((4*n)-1);
    vector<int>A(m);
    for(int  i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    vector<int>B(n+1, 0);
    for(int j = 0; j < m; j++)
    {
        B[A[j]]++;
    }

    for(int i = 1; i <= n; i++)
    {
        if(B[i] != 4)
        {
            cout << i  << endl;
        }
    }
    return 0;
}