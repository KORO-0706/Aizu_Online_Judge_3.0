#include <stdio.h>

int main(void) {
      /*1   2     3      4      5     6*/
    int Num1, Num2, Num3, Num4, Num5, Num6;
    scanf("%d %d %d %d %d %d", &Num1, &Num2, &Num3, &Num4, &Num5, &Num6);
    
    int q;//回数
    scanf("%d", &q);

    for(int i = 0; i < q; i++){
        int up, sorth;
        scanf("%d %d", &up, &sorth);
        while(Num1 != up){//上面が値になるまで
            if(Num5 == up || Num2 == up){
                int data = Num1;
                Num1 = Num2;
                Num2 = Num6;
                Num6 = Num5;
                Num5 = data;
            }else{
                int data = Num1;
                Num1 = Num4;
                Num4 = Num6;
                Num6 = Num3;
                Num3 = data;
            }
        }
        while(Num2 != sorth){//下面が値になるまで
            int data = Num2;
            Num2 = Num4;
            Num4 = Num5;
            Num5 = Num3;
            Num3 = data;
        }
        printf("%d\n", Num3);
    }
    
    return 0;
}
