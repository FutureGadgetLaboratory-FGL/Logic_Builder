#include<stdio.h>
int main(){
    int f=1,i,a;
    printf("Enter a number for find factorial=");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        f=f*i;
    }
    printf("Factorial of %d = %d",a,f);
return 0;
}