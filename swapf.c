//arguments,no return
#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swapping a and b:%d %d",a,b);
}
int main(){
    int a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    printf("before swapping a and b: %d %d",a,b);
    swap(a,b);
    return 0;
}