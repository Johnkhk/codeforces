// #include "./stdc++.h"
#include <bits/stdc++.h>

using namespace std;


void solve() {
    int n, k;
    cin >> n >> k;
    int res=0;
    vector<int> scores(n);
    for(int i=0;i<n;i++) {
        cin >> scores[i];
    }
    int kth_score = scores[k-1];
    for (int i=0;i<n;i++) {
        if (scores[i] >= kth_score && scores[i] > 0) {
            res++;
        }
    }
    cout<<res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}