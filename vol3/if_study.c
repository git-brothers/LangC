#include <stdio.h>
int main() {
    int f=0;
    scanf("%d",&f);
    if (f > 1) {
        printf(" 牛丼\n");
    } else if(f < 1) {
        printf(" 天丼\n"); } 
    else {
        printf(" 麻婆丼\n");
    }
}