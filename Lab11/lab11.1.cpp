#include <stdio.h>
typedef struct {
    int d,m,y;
} Date;
 
Date read();
void print(Date dt);
int less(Date a, Date b);

int main()
{
    Date a, b;
    a = read();
    b = read();
    print(a);
    print(b);
    printf("Garaas avsan on sar udriin baga ni!\n");
    if (less(a, b))
		print(a);
	else
		print(b);
}

Date read()
{
    Date date;
    printf("Garaas on sar udriig oruulna uu!\n");
    scanf("%d%d%d", &date.y, &date.m, &date.d);
    return date;
}

void print(Date dt)
{
    printf("%d:%02d:%02d\n", dt.y, dt.m, dt.d);
}

int less(Date a, Date b)
{
    if(a.y<b.y)
        return 1;
    else if(a.y==b.y && a.m<b.m)
        return 1;
    else if(a.y==b.y && a.m==b.m && a.d<b.d)
        return 1;
    return 0;
}

