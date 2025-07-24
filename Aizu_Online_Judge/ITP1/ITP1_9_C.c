#include <stdio.h>
#include <string.h>

int main(void){
    int Tscore = 0;
    int Hscore = 0;
    
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        char T[100+1];
        char H[100+1];
        scanf("%s %s", T, H);   

        int judge = strcmp(T, H);
        if(judge > 0){
            Tscore += 3;
        }else if(judge < 0){
            Hscore += 3;
        }else if(judge == 0){
            Tscore++;
            Hscore++;
        }
    }
    printf("%d %d\n", Tscore, Hscore);

    return 0;
}