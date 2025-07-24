#include <stdio.h>
#include <string.h>

int main(void) {
    
    char box[1000+1];//最初の文字列
    scanf("%s", box);

    int q;
    scanf("%d", &q);//命令の数
    for(int i = 0; i < q; i++){

        char command[7+1];//命令文
        int a,b;//命令の範囲a~b
        scanf("%s %d %d", command, &a, &b);
        if(strcmp(command, "print") == 0){//もしprintなら
            for(int i = a; i <= b; i++){
                printf("%c", box[i]);
            }
            printf("\n");
        }else if(strcmp(command, "reverse") == 0){//もしreverseなら
            char data[(b-a+1)+1];
            for(int i = a; i <= b; i++){//指定の範囲をコピーする
                data[i-a] = box[i]; 
            }
            for(int i = a; i <= b; i++){//コピーした逆を入れる
                box[i] = data[b-i]; 
            }
        }else if(strcmp(command, "replace") == 0){//もしreplaceなら
            char line[b-a+1];
            scanf("%s", line);
            int count = 0;
            for(int i = a; i <= b; i++){//指定の範囲をコピーする
                box[i] = line[count];
                count++;
            }
        }

    }
    return 0;
}
