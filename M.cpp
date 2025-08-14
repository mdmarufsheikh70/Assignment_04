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
        vector<int>B(m);

        for(int i = 0; i < m; i++)
        {
            cin >> B[i] ;
        }

        int min = 0;
        for(int j = 0; j < m; j++)
        {
            if(B[min] >= B[j])
            {
                min = j ;
            }
        }

        B[min] = B[min] + 1;

        int product = 1;

        for(int j = 0; j < m; j++)
        {
            product *= B[j] ;
        }

        cout << product << endl;
    }
    
    return 0;
}