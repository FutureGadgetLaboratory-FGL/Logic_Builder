#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch='A';
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}