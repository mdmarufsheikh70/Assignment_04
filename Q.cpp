#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();

    int n, l, r;
    cin >> n >> l >> r;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        if (A[i] < l) cout << l << " ";
        else if (A[i] > r) cout << r << " ";
        else cout << A[i] << " ";
    }

    cout << "\n";
    return 0;
}
