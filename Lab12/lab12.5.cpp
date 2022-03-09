#include<stdio.h>

struct Triangle
{
    int a, b, c;
};

void read ( struct Triangle *p)
{
    scanf("%d",&(*p).a);
    scanf("%d",&(*p).b);
    scanf("%d",&(*p).c);
}

int main()
{
    void read ( struct Triangle *p);

    struct Triangle g;
    read(&g);
    printf("%d %d %d",g.a,g.b,g.c);
    return 0;
}



