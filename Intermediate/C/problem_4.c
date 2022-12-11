//prouduct of two matrices
#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,n1,n2,m1,m2;
	printf("Enter the number of rows for 1st matrix:");
	scanf("%d",&n1);
	printf("Enter the number of columns for 1st matrix:");
	scanf("%d",&m1);
    printf("Enter the number of rows for 2nd matrix:");
	scanf("%d",&n2);
	printf("Enter the number of columns for 2nd matrix:");
	scanf("%d",&m2);
	if(m1==n2)
	{printf("Enter the 1st matrix elements:");
	for(i=0;i<n1;i++)
	{for(j=0;j<m1;j++)
	{scanf("%d",&a[i][j]);
	}
	}
	printf("Enter the 2nd matrix elements:");
	for(i=0;i<n2;i++)
	{for(j=0;j<m2;j++)
	{scanf("%d",&b[i][j]);
	}
	}
	for(i=0;i<n1;i++)
	{for(j=0;j<m2;j++)
	{c[i][j]=0;
	for(k=0;k<m1;k++)
	{c[i][j]+=a[i][k]*b[k][j];
	}
	}
	}
	printf("Multiplication of 2 matrix:\n");
	for(i=0;i<n1;i++)
	{for(j=0;j<m2;j++)
	{printf("%d\t",c[i][j]);
	}
	printf("\n");
	}
    }
    else
    printf("Multiplication is not possible.");
}
