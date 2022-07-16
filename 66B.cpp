#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, res = 1;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++){
        int count = 1;
        int pos = arr[i];
        for(int j = i + 1; j < n; j++){
            if(pos == arr[j])
                count++;
            else if(pos > arr[j]){
                count++;
                pos = arr[j];
            }
            else{
                pos = arr[i];
                break;
            }
        }
        pos = arr[i];
        for(int j = i - 1; j >= 0; j--){
            if(pos == arr[j])
                count++;
            else if(pos > arr[j]){
                count++;
                pos = arr[j];
            }
            else
                break;
        }
        if(count > res)
            res = count;
    }
    printf("%d", res);
    return 0;
}
