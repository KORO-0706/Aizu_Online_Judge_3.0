#include <stdio.h>

int Daice_Judge(int[] , int[]);

int main(void) {
    int n;//さいころの数
    scanf("%d", &n);
    int daice[n+1][6+1];//daice[さいころの数+1][さいころの目の数+1];
    for(int i = 1; i <= n; i++){//さいころを読み取る
        for(int j = 1; j <= 6; j++){
            scanf("%d", &daice[i][j]);
        }
    }

    int flag = 0;
    for(int i = 1; i <= n; i++){
        if(flag == 1) break;//flagが1なら、もうやめる
        for(int j = 1; j <= n; j++){
            if(i == j) break;
            int buffer1[6+1], buffer2[6+1];
            for(int k = 1;  k <= 6; k++){
                buffer1[k] = daice[i][k];
                buffer2[k] = daice[j][k];
            }
            if(Daice_Judge(buffer1, buffer2) == 1){
                printf("No\n");
                flag = 1;//もしサイコロが同じならflagを1にする
                break;
            }
        }
    }
    if(flag == 0){//flagが0なら、同じサイコロがなかったということ
        printf("Yes\n");
    }
    return 0;
}

int Daice_Judge(int daice1[], int daice2[]){//サイコロの判定用関数//同じなら1, 違うなら0
    int Num[6+1];
    for(int i = 1; i <= 6; i++){
        Num[i] = daice2[i];
    }

    for(int i = 1; i <= 6; i++){//6面それぞれを上面としたときを考える
        int data;
        for(int n = 1; n <= 6; n++){//もとの値にリセットする
            daice2[n] = Num[n];
        }

        switch(i){//それぞれが上面になるように回転させる
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

        if(daice1[1] == daice2[1] && daice1[6] == daice2[6]){//上面とその正反対の下面が一致するかしらべる
            for(int n = 0; n < 4; n++){//上面に接している面を回転させて、一致するか調べる
                int data = daice2[2];
                daice2[2] = daice2[4];
                daice2[4] = daice2[5];
                daice2[5] = daice2[3];
                daice2[3] = data;

                if(daice1[2] == daice2[2] && daice1[3] == daice2[3] && daice1[4] == daice2[4] && daice1[5] == daice2[5]) return 1;
            }
        }
        if(i == 6) return 0;
    }
}