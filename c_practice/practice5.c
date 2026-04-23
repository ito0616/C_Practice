#include <stdio.h>

int main() {
    double h, w;
    double area;

    printf("三角形の面積を求めよう！\n");

    printf("高さを入力: ");
    scanf("%lf", &h);

    printf("底辺を入力: ");
    scanf("%lf", &w);

    if (h <= 0 || w <= 0) {
        printf("0より大きい値を入力してください。\n");
        return 0;
    }

    area = h * w / 2;

    printf("三角形の面積は%.2fです。\n", area);

    return 0;
}
