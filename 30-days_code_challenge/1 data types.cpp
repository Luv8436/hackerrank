#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int integer_var; 
    double double_var;
    // Read and save an integer, double, and String to your variables.
    scanf("%d",&integer_var);
    scanf("%lf",&double_var);
    char my_var[100];
    scanf("%*[\n] %[^\n]",my_var); 
    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+integer_var);
    // Print the sum of the double variables on a new line.
    printf("%0.1lf\n",d+double_var);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s",s,my_var);
   

    return 0;
}
