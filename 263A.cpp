#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5][5];
    int r, c;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                r = i + 1;
                c = j + 1;
            }
        }
    }
    printf("%d", abs(r - 3) + abs(c - 3));
    return 0;
}
