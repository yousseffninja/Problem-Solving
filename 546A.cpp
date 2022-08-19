#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, cost = 0, count = 1;
    cin >> k >> n >> w;
    while (w--)
    {
        cost += k * count;
        count++;
    }
    if (cost <= n)
        cout << 0;
    else
        cout << abs(cost - n);
    return 0;
}