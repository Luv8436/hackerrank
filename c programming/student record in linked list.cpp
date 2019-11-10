#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
void strcopy(char from[], char to[]);
// Write other function prototypes here (if any)

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

// Write your createStudent function here (and any other functions you see fit)
struct student *createStudent(char studentName[], int studentAge)
{
    struct student *ptr;
    ptr=(struct student *)malloc(sizeof(struct student));
    strcopy(ptr->name,studentName);
    ptr->age=studentAge;
    ptr->next=NULL;
    return ptr;
}
void strcopy(char from[], char to[]){
    int i=0;
   
    for(i=0;i<50;i++){
        from[i]=to[i];
    }
    
    
}
