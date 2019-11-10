// program for linked list
#include <stdio.h>
#include<stdlib.h>

struct point{
    int x;
    int y;
    struct point * next;
};
void readPoints(struct point *start);
void printPoints(struct point *start);
struct point * append (struct point * end, struct point * newpt);
int main(void) 
{
    //! showMemory(start=65520)
   int num,i;
   printf("enter the number of points: ");
   scanf("%d",&num);
    struct point * start, * end,*newpt;
    for(i=0;i<num;i++)
    {
        if(i==0)
        {
            start=end=(struct point *)malloc(sizeof(struct point));
            start->next=NULL;
        }
        else
        {
            newpt=(struct point *)malloc(sizeof(struct point));
            newpt->next=NULL;
            end=append(end,newpt);
        }
        
    }
    readPoints(start);
    
    printPoints(start);
    
	return 0;
}
void readPoints(struct point *start) 
{
    //! showMemory(start = 65520, cursors=[ptr])
    struct point * ptr;
    ptr = start;
    while (ptr!=NULL) {
        printf("enter the coordinates of point: ");
        scanf("%d %d",&ptr->x,&ptr->y);
        ptr = ptr->next;
    }
}
void printPoints(struct point *start) {
    //! showMemory(start = 65520, cursors=[ptr])
    struct point * ptr;
    ptr = start;
    while (ptr!=NULL) {
        printf("(%d, %d)\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
}

struct point * append (struct point * end, struct point * newpt) {
    end->next = newpt;
    return(end->next);
} 
