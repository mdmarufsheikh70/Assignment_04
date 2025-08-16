#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

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

    vector<int>B;
    for(int i = 0; i < n - 1; i++)
    {
        if(A[i] < A[i+1])
        {
            while (A[i] != A[i+1])
            {
                B.push_back(A[i]);
                A[i]++;
            }
        }
        else
        {
            while (A[i] != A[i+1])
            {
                B.push_back(A[i]);
                A[i]--;
            }
        }
        if(i == n-2)
        {
            B.push_back(A[i+1]);
        }
    }

    for(int i = 0; i < B.size(); i++)
    {
        cout << B[i] << " " ;
    }
    return 0;
}