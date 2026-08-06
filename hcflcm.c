
#include <stdio.h>

int main() {
    int a,b,x,y;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    int hcf=a;
    int lcm=(x*y)/a;
    printf("lcm and hcf:%d %d",lcm,hcf);
    return 0;
}