#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    int bb, ba, sb, sa, gb, ga, pb, pa;
    cin >> bb >> ba >> sb >> sa >> gb >> ga >> pb >> pa;
    int gtp = pa - pb;
    int stg = ga - gb + gtp;
    int bts = sa - sb + stg;
    cout << bts << endl;
    cout << stg << endl;
    cout << gtp << endl;
    return 0;
}