#include<stdio.h>
void len_str(char a[100])
{
    int i,l=0;
    for(i=0; a[i] != '\0'; i++)
    {
      l=l+1;
    }
    printf("Length of string: %d\n",l);
}
/********************************************/
int main()
{
    char x[100] = "Codechef";      /**1**/
    char y[100] = "hackerrank";    /**2**/
    char z[100] = "hackerearth";   /**3**/
    len_str(x);
    len_str(y);
    len_str(z);
}
/**********************************************/
/**********************************************
Output:
Length of string: 8
Length of string: 10
Length of string: 11
***********************************************/
