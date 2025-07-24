#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    int a[n+1];
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    int b[n+1];
    for(int i = 1; i <= n; i++){
        scanf("%d", &b[i]);
    }

    for(int i = 1; i <= 3; i++){//p=1~3 用
        double p = i;
        double sigma_sum = 0;
        for(int i = 1; i <= n; i++){
            double ab = a[i]-b[i];
            if(a[i]-b[i] < 0) ab = ab*(-1);//絶対値とする
            sigma_sum += pow(ab, p);
        }
        double D = pow((double)sigma_sum, 1/p);
        printf("%lf\n", D);
    }

    double max = 0;
    for(int i = 1; i <= n; i++){//p=無限 用
        double ab = a[i]-b[i];
        if(a[i]-b[i] < 0) ab = ab*(-1);//絶対値とする 
        if(i == 1){
            max = ab;
        }else{
            if(max < ab){
                max = ab;
            }
        }
    }
    printf("%lf\n", max);

    return 0;
}
