#include<stdio.h>
struct point 
{
    int x;
    int y;
};
int main()
{
    struct point p= {.y=120, .x=100};
    printf("%d %d",p.x,p.y);
    return 0;
}