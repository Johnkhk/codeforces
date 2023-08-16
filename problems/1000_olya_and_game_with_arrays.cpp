// #include "./stdc++.h"
#include <bits/stdc++.h>

using namespace std;


void solve() {
    // 1, 2, 3, 4, 5, 6, 7, 8, 9, 100
    // 4,8,12,16,20,24,28,32,36,40
    // 3,4,5,6,7,8,9,10,11,12

    // 1 3 5
    // 2 4 6

    // second smallest is how much space ur creating
    // then you want to move it to the smallest minval, if its even smaller than that minval, ur minusing some value
    /*
    
    1001 7 1007 5
    8 11 6
    2 9

    for this one, you wanna look at the value you create.
    third row creates value 9
    second row creates value 8
    first row creates value 7
    therefore, you want to move everything to first row

    result will be 
    2,5,7,1001,1007
    8,11
    9
    for value of 19
    */
    // 100,
    // 40
    // 3
    int n;
    cin >> n;
    int res = 0;
    int minval = 50000;
    int min_value = 50000;
    for (int i = 0; i < n; i++) {
        int m = 0;
        cin >> m;
        vector<int> array(m);
        for (int i=0; i<m; ++i) {
            cin >> array[i];
        }
        sort(array.begin(), array.end());
        // find the minval, find the maxvals, minus the min max val, add the minval
        // find the array with the minimum max val. 
        int value = array[1];
        res+=value;
        if (min_value > value) {
            min_value = value;

        }
        minval = min(minval, array[0]);
        // minmaxval = min(array[m-1], minmaxval);
    }
    cout << res - min_value + minval<<'\n';

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}