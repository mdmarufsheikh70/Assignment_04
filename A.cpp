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
        int counts = 0;
        int m;
        cin >> m;

        while (m--)
        {
            int o;
            cin >> o;
            if(o % 2 != 0)
            {
                counts++;
            }
        }
        cout << counts << endl;
    }
    
    return 0;
}