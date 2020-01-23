#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a , int b, int c , int d);
int max_of_two(int a, int b);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a , int b, int c , int d)
{
    int greatest = max_of_two(max_of_two(max_of_two(a,b),c),d);
    return greatest;

}
int max_of_two(int a, int b)
{
    if(a>=b)
    return a;
    else {
        return b;
    }
}
