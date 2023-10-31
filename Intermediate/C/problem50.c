#include<stdlib.h>
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int k=0;
    int f=15;
    for (int i = 0; i<5; i++)
    {
        for(int j=0;j<5;j++){
            if(i==0){
                printf("%d  ",arr[k++]);
            }
            else if(i>0&&i<4&&j==0){
                printf("%d ",arr[f--]);
            }
            else if(i>0&&i<4&&j==4){
                printf("%d ",arr[k++]);
            }
            else if(i==4){
                printf("%d ",arr[f--]);
            }
            else{
                printf("   ");
            }

        }
        printf("\n");
    }
    
    return 0;
}