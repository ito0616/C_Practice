#include <stdio.h>

int main(){
    int apple, orange, strawberry;

    printf("そこの兄ちゃんなんか買うか？\n");
    printf("りんご一個100円  オレンジ一個88円  苺1パック398円\n");

    printf("りんごの個数: ");
    scanf("%d", &apple);
    printf("オレンジの個数: ");
    scanf("%d", &orange);
    printf("苺のパック数: ");
    scanf("%d", &strawberry);

    int total = apple * 100 + orange * 88 + strawberry * 398;
    printf("合計: %d円\n", total);
    printf("毎度あり！\n");

    return 0;
}