#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A(8);
    for (int i = 0; i < 8; ++i) cin >> A[i];

    for (int i = 0; i < 8; ++i) {
        if (A[i] < 100 || A[i] > 675 || A[i] % 25 != 0) {
            cout << "No\n";
            return 0;
        }
        if (i > 0 && A[i] < A[i - 1]) {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}
