#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int>A(n);
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    vector<int>B(n);

    for(int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    int sum = 0;

    for(int j = 0; j < m; j++)
    {
        sum += A[B[j]-1];
    }

    cout << sum << endl;
}
