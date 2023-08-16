


#include <bits/stdc++.h>
// #include "./stdc++.h"


using namespace std;






void solve() {
    int n;
    cin >> n;
    string word;
    for(int i=0;i<n;i++) {
        cin >> word;
        int wordlen = word.length();
        string res_str = "";
        if(wordlen>10) {
            res_str = word[0] + to_string(wordlen-2) + word[wordlen-1];
            cout<<res_str<<'\n';
        }
        else {
            cout << word <<'\n';
        }
    }
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