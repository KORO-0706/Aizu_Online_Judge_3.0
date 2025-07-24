#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char word[10+1];//文字列の末尾の'\0'を入れるために1多くする
    scanf("%s", word);

    int counter = 0;
    while(1){
        char txt[1000];
        scanf("%s", txt);
        
        int judge = strcmp(txt, "END_OF_TEXT");
        if(judge == 0){
            break;
        }
        int i = 0;
        while(txt[i] != '\0'){
            txt[i] = tolower(txt[i]);
            i++;
        }
        
        judge = strcmp(txt, word);
        if(judge == 0){
            counter++;
        }
    }
    printf("%d\n", counter);

    return 0;
}
