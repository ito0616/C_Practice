int main(){
    
    double num1, num2, num3;

    printf("三つの実数を入力してください\n");
    printf("実数1: ");
    scanf("%lf", &num1);
    printf("実数2: ");
    scanf("%lf", &num2);
    printf("実数3: ");
    scanf("%lf", &num3);

    double sum = num1 + num2 + num3;
    int average = (int)(sum / 3);
    printf("平均: %d\n", average);

     return 0;
}