#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    while(1){
        char word[200+1];//文字列の末尾の'\0'を入れるために1文字分多くする
        scanf("%s", word);
        if(word[0] == '-')break;
        int scale = strlen(word);
        int m;
        scanf("%d", &m);

        char box[strlen(word)];
        for(int i = 0; i < scale; i++){
            box[i] = word[i];
        }
        for(int k = 0; k < m; k++){
            char swapBox[scale];
            for(int i = 0; i < scale; i++){
                swapBox[i] = box[i];
            }
            
            int h;
            scanf("%d", &h);
            for(int i = h; i < scale ; i++){//まず、シャッフルしないものを前に出す
                box[i-h] = swapBox[i];
            }
            for(int i = 0; i < h ; i++){//シャッフルしたものを列の後ろの組み込む
                box[i+scale-h] = swapBox[i];
            }
        }
        for(int i = 0; i < scale; i++){
            printf("%c", box[i]);
        }
        printf("\n");
    }

    return 0;
}
