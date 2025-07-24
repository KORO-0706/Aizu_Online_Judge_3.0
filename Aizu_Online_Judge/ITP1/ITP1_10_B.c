#include <stdio.h>
#include <math.h>

int main(void) {
    double PI = acos(-1);
    int a, b, C;
    scanf("%d %d %d", &a, &b, &C);

    double radC = (C * PI)/ 180.0;//[度]から[rad]に変換する
    double S = 0.5 * a * b * sin(radC);
    printf("%lf\n", S);

    double cc = a*a + b*b - 2*a*b*cos(radC); //余弦定理を使用[c^2 = a^2 + b^2 -2ab * cos(C)]
    double L = a + b + sqrt(cc);
    printf("%lf\n", L);

    double h = (S*2)/a;
    printf("%lf", h);

    return 0;
}
