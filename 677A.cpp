#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, h, x, res = 0;
    scanf("%d %d", &n, &h);
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        if(h >= x)
            res++;
        else
            res += 2;
    }
    printf("%d\n", res);
    return 0;
}
