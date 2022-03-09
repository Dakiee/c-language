#include <stdio.h>
#include <math.h>

typedef struct{
	int a,b,c;
} Triangle;
typedef struct{
	int x,y;
} Point;
typedef struct{
	Point A,B,C;
} Triangle_P;
double distance(Point a, Point b);
double find_area(Triangle g);
main(){
	Triangle_P t;
	Triangle ft;
	printf("Gurwaljnii tseguud(x1,y1,x2,y2,x3,y3):");
	scanf("%d%d%d%d%d%d",&t.A.x,&t.A.y,&t.B.x,&t.B.y,&t.C.x,&t.C.y);
	
	ft.a= distance(t.A,t.B);
	ft.b= distance(t.B,t.C);
	ft.c= distance(t.A,t.C);
	printf("\n %d %d %d",ft.a,ft.b,ft.c);
	printf("\nGurwaljnii talbai: %d",find_area(ft));
	
	return 0;
}
double distance(Point a, Point b){
	float d;
		
	d=sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2));
	
	return d;
}
double find_area(Triangle g){
	printf("\n %d %d %d",g.a,g.b,g.c);
	printf("\n %d", (g.a + g.b + g.c)/2);
	float s,p;
	p=(g.a + g.b + g.c) / 2;
	printf("\n %d \n",p);
	printf("\n %d", sqrt(p*(p-g.a)*(p-g.b)*(p-g.c)));
	s=sqrt(p*(p-g.a)*(p-g.b)*(p-g.c));
	printf("\n %d \n",s);
	return s;
}
