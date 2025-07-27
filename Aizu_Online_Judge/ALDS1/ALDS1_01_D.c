#include <stdio.h>
#include <math.h>

int is_prime(long);

int main(void){
    int n;
    scanf("%d", &n);

    int box[n+1];
    for(int i = 0; i < n; i++){
        scanf("%d", &box[i]);
    }

    int max = box[1] - box[0];
    int min = box[0];
    for(int i = 1; i < n; i++){
        if(box[i-1] < min) min = box[i-1];//手前の最小値を決める
        if(max < box[i] - min) max = box[i] - min;
    }
    printf("%d\n", max);

    return 0;
}
