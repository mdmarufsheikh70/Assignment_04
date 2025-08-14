#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    long long n;
    cin >> n;
    
    long long int results = n * (n + 1) / 2;

    long  m = n-1;
    long sum = 0;
    vector<int>A(m);

    for(int i = 0 ; i < m; i++)
    {
        cin >> A[i];
        sum += A[i];
    }

    cout << results - sum << endl;
    return 0;
}