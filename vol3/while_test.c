#include <stdio.h>

int main(){
    //while文発展課題①
    int count=1;
    printf("while文発展課題①\n");
    while(count<=10){
        printf("%d\n",count);
        count++;
    }

    //while文チャレンジ問題
    count=2;
    printf("while文チャレンジ問題\n");
    while(count<=10){
        printf("%d\n",count);
        count = count+2;
    }
return 0;
}