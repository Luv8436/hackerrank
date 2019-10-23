#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T,i,j;
    scanf("%d",&T);
    char arr[T][10001];
    for(i=0;i<T;i++)
    {
        scanf("%s",arr[i]);
    }
    for(i=0;i<T;i++)
    {
        for(j=0;arr[i][j]!='\0';j++)
        {
            if(j%2==0)
            printf("%c",arr[i][j]);
        }
        printf(" ");
         for(j=0;arr[i][j]!='\0';j++)
        {
            if(j%2!=0)
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
