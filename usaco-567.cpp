#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    vector<bool> arr(100);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = a; i < b; i++)
        arr[i] = 1;
    for (int i = c; i < d; i++)
        arr[i] = 1;
    int ans = 0;
    for (int i = 0; i < 100; i++)
        if (arr[i])
            ans++;
    cout << ans;
    return 0;
}