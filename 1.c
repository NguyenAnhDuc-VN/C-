#include<stdio.h>

int main(){

    char a;
    int n = 5;
    scanf("%c", &a);
    printf("%c - %x \n ",a,a);
    printf("%d - %d - %d - %d \n", ++n, n++, --n, n--);
    return 0;
}