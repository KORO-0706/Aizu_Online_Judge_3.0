#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    int i = 1;

    do{
        int x = i;

        if(x % 3 == 0){//3の倍数かどうか
            printf(" %d", i);
        }else{
            do{
                if(x % 10 == 3){//10で割った余りが3かどうか
                    printf(" %d", i);
                    break;
                }
                x /= 10;
            }while(x);
        }
    }while(++i <= n);

    printf("\n");

    return 0;
}