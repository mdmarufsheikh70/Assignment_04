// #include<bits/stdc++.h>
// using namespace std;
// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int main()
// {
//     optimize();

//     int n;
//     cin >> n;
//     vector<int>A(n);

//     for(int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }

//     vector<int>B;
//     for(int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for(int j = 0; j < n; j++)
//         {
//             if(A[j] > A[i])
//             {
//                 sum += A[j];
//             }
//         }
        
//         if(sum > A[i])
//         {
//             B.push_back(sum);
//         }
//         else
//         {
//             B.push_back(0);
//         }
//     }

//     for(int i = 0; i < B.size(); i++)
//     {
//         cout << B[i] << " " ;
//     }
//     return 0;
// }


