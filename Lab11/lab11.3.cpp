#include <stdio.h>

typedef struct{
	int d,m,y;
} Date;

Date read();
void print(Date dt);
int less(Date a,Date b);
void sort (Date ognoo[], int n);

main(){
	int i,n,j,k;
	printf("N toog oruul:");
	scanf("%d",&n);
	Date ognoo[n];
	for(i=0;i<n;i++){
		printf("\n%d-r ognoo:",i+1);
		ognoo[i]= read();
	}
	
	sort(ognoo, n); 
		for(i=0;i<n;i++){
		print(ognoo[i]);	
	} 
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

void sort (Date ognoo[], int n){
int i,j,k; 
Date tmp;
for(i=0;i<n;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(less(ognoo[k],ognoo[j])){
				k=j;
			}
		}
		tmp = ognoo[k];
		ognoo[k]= ognoo[i];
		ognoo[i]= tmp;
	} 
}
