#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int>A(n+1);
    vector<int>B(n+1,0);
    for(int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }

    for(int i = 1; i <= n; i++)
    {
        if(B[i] == 0)
        {
            B[A[i]] = 1;
        }
    }

    vector<int>C;
    for(int i = 1; i <= n; i++)
    {
        if(B[i] == 0)
        {
            C.push_back(i);
        }
    }
    
    cout << C.size() << endl;

    for(int i = 0; i < C.size(); i++)
    {
        cout << C[i] << " " ;
    }
    return 0;
}