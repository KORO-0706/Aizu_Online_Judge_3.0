#include <stdio.h>
//void call(int n)
int main(void){
    int n;
    scanf("%d", &n);

    int i = 1;
    
    CHECK_NUM:
    int x = i;
    if ( x % 3 == 0 ){
        printf(" %d", i);
        goto END_CHECK_NUM;
    }
    INCLUDE3:
    if ( x % 10 == 3 ){
        printf(" %d", i);
        goto END_CHECK_NUM;
    }
    x /= 10;
    if ( x ) goto INCLUDE3;
    END_CHECK_NUM:
    if ( ++i <= n ) goto CHECK_NUM;
    printf("\n");
  }