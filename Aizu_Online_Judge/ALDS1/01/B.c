#include <stdio.h>
#include <math.h>

int gcm(int, int);

int main(void){
    int x, y;
    scanf("%d %d", &x, &y);
    
    printf("%d\n", gcm(x, y));

    return 0;
}

int gcm(int x, int y){
    if(x < y){
        int buf = x;
        x = y;
        y = buf;
    }

    while(y != 0){
        int buf = y;
        y = x % y;
        x = buf;
    }
    return x;
}