#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    while (n--)
    {
        int m;
        cin >> m;
        vector<int> A(m);
        long long sum = 0;
        for(int i = 0; i < m; i++)
        {
            cin >> A[i];
            sum += A[i];
        }

        long long root = sqrt(sum);
        if(root * root == sum)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
