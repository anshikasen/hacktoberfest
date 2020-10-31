#include<stdio.h>
void mat_multiply(int a[10][10],int b[10][10],int c[10][10],int n)
{
    int i , j, k;
	for (i=0;i<=n-1;i++)
	{
		for (j=0;j<n;j++)
		{
            c[i][j]=0;
			for (k=0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
		}
    }
}
/********************************************/
int main()
{
    int a[10][10]={{1,2,3},{1,2,3},{1,2,3}};
    int b[10][10]={{1,2,3},{1,2,3},{1,2,3}};
    int c[10][10];
    int i,j;
    int n=3;
    mat_multiply(a,b,c,n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
           printf("%d ", c[i][j]);
        printf("\n");
    }
}
/**********************************************/
/**********************************************
algorithm:
ALGORITHM Matrix_multiplication( a[][] ,b[][], c[][])
BEGIN: FOR i=0 TO n-1 DO
         FOR j=0 TO n-1 DO
            FOR k=0 TO n-1 DO
              c[i][j]+=a[i][k]*b[k][j]
           return c[i][j]
END;
***********************************************/
/**********************************************
Output:
6 12 18
6 12 18
6 12 18
***********************************************/
