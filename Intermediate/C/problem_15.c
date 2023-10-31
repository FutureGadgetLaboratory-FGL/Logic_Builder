//addition of two matrices
#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,n1,n2,m1,m2;
	printf("Enter the number of rows for 1st matrix:");
	scanf("%d",&n1);
	printf("Enter the number of columns for 1st matrix:");
	scanf("%d",&m1);
    printf("Enter the number of rows for 2nd matrix:");
	scanf("%d",&n2);
	printf("Enter the number of columns for 2nd matrix:");
	scanf("%d",&m2);
	if((n2==n1)&&(m1==m2))
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
	{for(j=0;j<m1;j++)
	{c[i][j]=a[i][j]+b[i][j];
	}
	}
	printf("Addition of 2 matrix:\n");
	for(i=0;i<n1;i++)
	{for(j=0;j<m1;j++)
	{printf("%d\t",c[i][j]);
	}
	printf("\n");
	}
    }
    else
    printf("Addition is not possible.");
}
