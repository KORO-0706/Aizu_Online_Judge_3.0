#include <stdio.h>
int main(void){
    int i = 1;
    int a = 0;

    while(1){
        scanf("%d", &a);
        
        if(a == 0){
            break;
        }
        printf("Case %d: %d\n", i, a);
        i++;
    }
    return 0;
}
