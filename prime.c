#include<stdio.h>
int main(){
    int n;
    printf("get the value of n:");
    scanf("%d",&n);
      int i,prime;
    if(n<=1){
        prime=0;
    }
      for(i=2;i*i<=n;i++){
        if(n%i==0){
            prime=0;
        }
        else{
            prime=1;
        }
    }
    if(prime==0){
        printf("not a prime number ");
    }
    else{
        printf("prime number");
    }
}