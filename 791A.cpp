#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, res = 0;
    scanf("%d %d", &a, &b);
    while(a <= b){
        a *= 3;
        b *= 2;
        res ++;
    }
    printf("%d", res);
    return 0;
}
