#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    int A[N+1];
    for(int i = 1; i <= N; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 1;  i <= N-1; i++){
        printf("%d", A[i]);
        if(i != N-1) printf(" ");
    }printf("\n");

    for(int i = 1; i <= N-1; i++){
        int v = A[i];
        int j = i - 1;
        while(j >= 0 && A[j] > v){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
    }

    for(int i = 1;  i <= N-1; i++){
        printf("%d", A[i]);
        if(i != N-1) printf(" ");
    }
    printf("\n");
}
