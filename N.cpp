#include<bits/stdc++.h>
using namespace  std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        int m;
        cin >> m;
        vector<int>A(m);
        vector<int>B((m+1),0);
        
        for(int i = 0 ; i < m; i++)
        {
            cin >> A[i];
        }

        for(int i = 0; i < m; i++)
        {
            B[A[i]]++;
        }

        bool has = 0;
        int that_is; 
        for(int i = 1; i <= m; i++)
        {
            if(B[i] >= 3)
            {
                that_is = i;
                has = 1;
                break;
            }
        }
        if(has)
        {
            cout << that_is << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    
    return 0;
}