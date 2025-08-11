#include <stdio.h>
#include <math.h>

int is_prime(long);

int main(void){
    int n;
    scanf("%d", &n);

    int sum = 0;
    for(int i = 0; i < n; i++){
        long num;
        scanf("%ld", &num);
        
        if(is_prime(num) == 1) sum++;
    }
    printf("%ld\n", sum);

    return 0;
}

int is_prime(long fig){
    if(2 > fig) return 0;
    if(fig == 2) return 1;
    if(fig % 2 == 0) return 0;

    for(long i = 3; i <= pow(fig, 0.5); i += 2){
        if(fig % i == 0) return 0;
    }
    return 1;
}