#include<stdio.h>
void swap(int* x,int* y);
int main()
{
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int* c=arr;
    int* b=arr+N-1;
    while(b>c){
    swap(c,b);
    c=c+1;
    b=b-1;
    }
    for(i=0;i<N;i++){
    printf("%d ",arr[i]);
    }
}
void swap(int* ptr1,int* ptr2)
{
    int t=*ptr1;
    *ptr1=*ptr2;
    *ptr2=t;
}
