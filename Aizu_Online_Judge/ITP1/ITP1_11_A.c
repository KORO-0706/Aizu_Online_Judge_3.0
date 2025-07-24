#include <stdio.h>
#include <math.h>

int main(void) {
      /*1   2     3      4      5     6*/
    int Num1, Num2, Num3, Num4, Num5, Num6;
    scanf("%d %d %d %d %d %d", &Num1, &Num2, &Num3, &Num4, &Num5, &Num6);
    
    /*
    printf("     [5:%d]\n", Num5);//デバッグ用
    printf("[4:%d][1:%d][3:%d][6:%d]\n", Num4, Num1, Num3, Num6);
    printf("     [2:%d]\n\n", Num2);
    */

    char command[100+1];
    scanf("%s", command);
    for(int i = 0; i < strlen(command); i++){
        int data;
        switch(command[i]){
            case 'N':   data = Num1;
                        Num1 = Num2;
                        Num2 = Num6;
                        Num6 = Num5;
                        Num5 = data;
            break;
            case 'S':   data = Num1;
                        Num1 = Num5;
                        Num5 = Num6;
                        Num6 = Num2;
                        Num2 = data;
            break;
            case 'E':   data = Num1;
                        Num1 = Num4;
                        Num4 = Num6;
                        Num6 = Num3;
                        Num3 = data;
            break;
            case 'W':   data = Num1;
                        Num1 = Num3;
                        Num3 = Num6;
                        Num6 = Num4;
                        Num4 = data;
            break;
            default:
            break;
        }
    }
    printf("%d\n", Num1);
    /*
    printf("     [5:%d]\n", Num5);//デバッグ用
    printf("[4:%d][1:%d][3:%d][6:%d]\n", Num4, Num1, Num3, Num6);
    printf("     [2:%d]\n", Num2);
    */
    return 0;
}
