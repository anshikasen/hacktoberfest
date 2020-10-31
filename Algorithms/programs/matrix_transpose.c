#include<stdio.h>
void mat_transpose(int a[10][10],int b[10][10],int n)
{
    int i , j;
	for (i=0;i<=n-1;i++)
	{
		for (j=0;j<n;j++)
		{
            b[i][j]=a[j][i];
        }
    }
}
/********************************************/
int main()
{
    int a[10][10]={{1,4,7},{8,1,2},{6,5,2}};
    int b[10][10];
    int i,j;
    int n=3;
    mat_transpose(a,b,n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
           printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
/**********************************************/
/**********************************************
algorithm:
ALGORITHM Matrix_Transpose( a[][] ,b[][])
BEGIN: FOR i=0 TO n-1 DO
        FOR j=0 TO n-1 DO
            b[i][j]=a[j][i]
        return b[i][j]
END;
***********************************************/
/**********************************************
Output:
1 8 6
4 1 5
7 2 2
***********************************************/
