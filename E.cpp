#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, d;
    cin >> n >> d;

    vector<int>A(n);

    for(int i = 0 ; i < n; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        if(A[i+1] - A[i] <= d)
        {
            cout << A[i+1] << endl;
            return 0;
        }
    }

    cout << "-1" << endl;

    return 0;
}