#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    cout << min(min(abs(a - x), abs(a - y)) + min(abs(b - x), abs(b - y)), abs(a - b));
    return 0;
}