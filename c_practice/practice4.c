#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("クラスの人数を入力");
    scanf("%d\n", &a);
    printf("野球(9人)チームのチーム数");
    scanf("%d\n", &b);
    printf("バレー(6人)チームのチーム数");
    scanf("%d\n", &c);
    d = a - (b * 9 + c * 6);

    if ( d > 0){
        printf("参加できていない人数は%d人です。\n", d);
    }else{
        printf("クラスの人数が%d人に足りないよ。\n", -d);
        return 0;
    }
    return 0;
}
