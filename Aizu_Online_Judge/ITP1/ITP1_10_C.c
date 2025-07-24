#include <stdio.h>
#include <math.h>

int main(void) {
    while(1){
        int n;
        scanf("%d", &n);
        if(n == 0) break;
        
        int score[n+1];
        for(int i = 1; i <= n; i++){//得点入力
            scanf("%d", &score[i]);
        }
        
        double sum = 0;
        for(int i = 1; i <= n; i++){//平均のための合計値
            sum += (score[i]);
        }
        double average = sum / n;//平均値の算出

        double sigma_sum = 0;
        for(int i = 1; i <= n; i++){//標準偏差を求めるためのΣの計算
            sigma_sum += (score[i]-average)*(score[i]-average);
        }

        double alpha = sqrt(sigma_sum / n);
        printf("%lf\n", alpha);
    }
    return 0;
}
