#include <stdio.h>
typedef struct {
	int d, m, y;
} Date;
Date read();
void print(Date dt);

int main() {
	int n, i;
	printf("Garaas heden on sar oruulah ve?\n");
	scanf("%d", &n);
	
	Date A[n];
	for (i=0; i<n; i++)
		A[i] = read();
	for (i=0; i<n; i++)
		print(A[i]);
}

Date read() {
    Date date;
    printf("Garaas on sar udriig oruulna uu!\n");
    scanf("%d%d%d", &date.y, &date.m, &date.d);
    return date;
}

void print(Date dt){
    printf("%d:%02d:%02d\n", dt.y, dt.m, dt.d);
}

