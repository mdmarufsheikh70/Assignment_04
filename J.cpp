#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int> A(n);

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int total = 0;

    for(int month = 1; month <= n; month++)
    {
        int temp = month;
        int month_digit = temp % 10;
        bool month_repdigit = true;

        while(temp > 0)
        {
            if(temp % 10 != month_digit)
            {
                month_repdigit = false;
                break;
            }
            temp /= 10;
        }

        if(!month_repdigit) continue;

        for(int day = 1; day <= A[month - 1]; day++)
        {
            int d = day;
            int day_digit = d % 10;
            bool day_repdigit = true;

            while(d > 0)
            {
                if(d % 10 != day_digit)
                {
                    day_repdigit = false;
                    break;
                }
                d /= 10;
            }

            if(day_repdigit && day_digit == month_digit)
            {
                total++;
            }
        }
    }

    cout << total << endl;
    return 0;
}
