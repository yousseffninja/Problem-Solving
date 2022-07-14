#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b, c, res = 0;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d %d", &a, &b, &c);
        if(a + b + c > 1)
            res++;
    }
    printf("%d", res);
    return 0;
}
