#include <stdio.h>

int main(void){
    while(1){
        int H, W;
        scanf("%d %d", &H, &W);
        if(H == 0 && W == 0){
            break;
        }

        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                if(i%2 == 0){//偶数//左端が[.]
                    if(j%2 == 0){//偶数
                        printf("#");
                    }else{//奇数
                        printf(".");
                    }
                }else{//奇数//左端が[#]
                    if(j%2 == 0){//偶数
                        printf(".");
                    }else{//奇数
                        printf("#");
                    }
                }  
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}