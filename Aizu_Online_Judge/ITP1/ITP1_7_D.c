#include <stdio.h>
 int main(void){
    int n, m, l;
    scanf("%d %d %d", &n, &m, &l);

    int A[n+1][m+1];
    int B[m+1][l+1];
    long C[n+1][l+1];

    for(int i = 0; i <= n ;i++){
        for(int j = 0; j <= l ;j++){
            C[i][j] = 0;
        }
    }

    for(int i = 1; i <= n; i++){//行列Aに代入
        for(int j = 1; j <= m; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 1; i <= m; i++){//行列Bに代入
        for(int j = 1; j <= l; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= l; j++){
            for(int k = 1; k <= m; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }


    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= l; j++){
            printf("%ld", C[i][j]);
            if(j != l){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
 }