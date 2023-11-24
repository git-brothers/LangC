#include <stdio.h>
int main(void)
{
    // 本日の総合テスト
    // 
    // 1.基礎構造と出力
    printf("Welcome to C Programming!\n");

    // 2.
    int x = 10;
    int y = 2*x;
    int z = x+y;
    printf("x = %d, y = %d, z = %d\n",x,y,z);

    // 3.
    int price = 500;
    float kekka = price * 1.1;
    printf("結果は、％f\n",kekka);
return 0; }