#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int>A(n);
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int current_val = 0;
    for(int i = 0; i < n; i++)
    {
        if(current_val < A[i])
        {
            current_val = A[i];
        }
        else
        {
            cout << current_val << endl;
            return 0;
        }
    }

    cout << A[n-1] << endl;
    return 0;
}