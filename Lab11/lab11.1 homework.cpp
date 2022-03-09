#include <stdio.h>
#include <stdlib.h>

int sariin_odruud[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
typedef struct{
	int d,m,y;
} Date;

Date read();
int uduriin_zuruu(Date a,Date b);

main(){
	Date a,b;
	printf("\nEhnii ognoo:");
	a= read();
	printf("\nDaraagiin ognoo:");
	b= read();
	
	if(aldaa(a) || aldaa(b)) {
        printf("\nAli neg ognoo aldaatai baina!");
    }else{
    	printf("\nOdriin zoruu %d",uduriin_zuruu(a,b));	
	}
	
	return 0;
}

Date read(){
	Date Date;
	printf("\nOn oruul:");
	scanf("%d",&Date.y);
	printf("\nSar oruul:");
	scanf("%d",&Date.m);
	printf("\nOdor oruul:");
	scanf("%d",&Date.d);
	
	return Date;
}
int aldaa(Date d) {
    if(d.d < 1 || d.d > sariin_odruud[d.m]) 
		return 1;
    if(d.m < 1 || d.m > 12) 
		return 1;
    return 0;
}
int uduriin_zuruu(Date a,Date b) {
    int res1, res2;
    int i;
	res1 = a.y*365;
	res2 = b.y*365;
    for(i=1; i < a.m; i++) {
        res1 += sariin_odruud[i];
    }
    for(i=1; i < b.m; i++) {
        res2 += sariin_odruud[i];
    }
    res1 += a.d;
    res2 += b.d;
    
    return res1-res2;
}
