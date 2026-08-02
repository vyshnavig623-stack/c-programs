#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("get the value of n:");
    scanf("%d",&n);
    int digit,rev=0,pal=n;
    while(n>0){
        digit=n%10;
        rev=rev*10+digit;
        n=floor(n/10);
    }
    if(rev==pal){
        printf("the number is palindrome");
    }
    else{
        printf("the number is not palindrome");
    }
}