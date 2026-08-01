//factorial of given number
#include<stdio.h>
int main(){
    int n;
    printf("get the value of number:");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial of number:%d",fact);
}