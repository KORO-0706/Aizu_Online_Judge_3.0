#include <stdio.h>

int main(void) {
      /*1   2     3      4      5     6*/
    int daice1[6+1];
    scanf("%d %d %d %d %d %d", &daice1[1], &daice1[2], &daice1[3], &daice1[4], &daice1[5], &daice1[6]);
    int daice2[6+1];
    scanf("%d %d %d %d %d %d", &daice2[1], &daice2[2], &daice2[3], &daice2[4], &daice2[5], &daice2[6]);

    /*
    printf("     [5:%d]\n", daice2[5]);//デバッグ用
    printf("[4:%d][1:%d][3:%d][6:%d]\n", daice2[4], daice2[1], daice2[3], daice2[6]);
    printf("     [2:%d]\n\n", daice2[2]);
    */

    int Num[6+1];
    for(int i = 1; i <= 6; i++){
        Num[i] = daice2[i];
    }

    int judge = 0;
    for(int i = 1; i <= 6; i++){//6面それぞれを上面としたときを考える
        int data;
        for(int n = 1; n <= 6; n++){//もとの値にリセット
            daice2[n] = Num[n];
        }

        switch(i){//それぞれが上面になるように回転
            case 2: data = daice2[1];//Nに転がす
                    daice2[1] = daice2[2];
                    daice2[2] = daice2[6];
                    daice2[6] = daice2[5];
                    daice2[5] = data;
            break;
            case 3: data = daice2[1];//Wに転がす
                    daice2[1] = daice2[3];
                    daice2[3] = daice2[6];
                    daice2[6] = daice2[4];
                    daice2[4] = data;
            break;
            case 4: data = daice2[1];//Eに転がす
                    daice2[1] = daice2[4];
                    daice2[4] = daice2[6];
                    daice2[6] = daice2[3];
                    daice2[3] = data;
            break;
            case 5: data = daice2[1];//Sに転がす
                    daice2[1] = daice2[5];
                    daice2[5] = daice2[6];
                    daice2[6] = daice2[2];
                    daice2[2] = data;
            break;
            case 6: for(int k = 0; k < 2; k++){//2回行う
                    data = daice2[1];//Wに転がす
                    daice2[1] = daice2[3];
                    daice2[3] = daice2[6];
                    daice2[6] = daice2[4];
                    daice2[4] = data;
                    }
            break;
        }

        if(daice1[1] == daice2[1] && daice1[6] == daice2[6]){//上面とその正反対の下面が合うかどうか
            for(int n = 0; n < 4; n++){//上面に接している面を回転させて、合うか調べる
                int data = daice2[2];
                daice2[2] = daice2[4];
                daice2[4] = daice2[5];
                daice2[5] = daice2[3];
                daice2[3] = data;

                if(daice1[2] == daice2[2] && daice1[3] == daice2[3] && daice1[4] == daice2[4] && daice1[5] == daice2[5]){
                    printf("Yes\n");
                    judge = 1;
                    break;
                }
            }
            if(judge){
                break;
            } 
        }
        if(i == 6){
            printf("No\n");
        }
    }
    
    return 0;
}
