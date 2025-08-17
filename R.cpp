// #include <bits/stdc++.h>
// using namespace std;
// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int main()
// {
//     optimize();

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;

//         vector<int>A(n + 1);

//         for (int i = 1; i <= n; i++)
//         {
//             cin >> A[i];
//         }

//         if (n > k)
//         {
//             if(A[1] == k)
//             {
//                 cout << "YES" << endl;
//             }
//             vector<int> B(n + 1);
//             for (int i = 1; i <= n; i++)
//             {
//                 B[A[i]]++;
//             }
//             if (B[k] > B[n])
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//         else
//         {
//             vector<int> B(k + 1);
//             for (int i = 1; i <= n; i++)
//             {
//                 B[A[i]]++;
//             }
//             if (B[k] > B[n])
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int>A(n);

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        int flag = 0;
        for(int i = 0; i < n; i++)
        {
            if(A[i] == k)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
       else
       {
        cout << "NO" << endl;
       }
    }
    return 0;
}
