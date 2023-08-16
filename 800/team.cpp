


#include <bits/stdc++.h>
// #include "./stdc++.h"


using namespace std;


void solve() {
    int n;
    cin >> n;
    int a,b,c;
    int res=0;
    for(int i=0;i<n;i++) {
        cin >> a >> b >> c;

        if (a+b+c >=2) {
            res++;
        }
    }
    cout << res;
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