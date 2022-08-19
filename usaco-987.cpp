#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    string arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int length = 0;
    for(int i = 0; i < n; i++){
        length += arr[i].length();
        if(length <= k){
            if(i != 0)
                cout << ' ';
            cout << arr[i];
        }
        else{
            cout << '\n' << arr[i];
            length = arr[i].length();
        }
    }
    return 0;
}