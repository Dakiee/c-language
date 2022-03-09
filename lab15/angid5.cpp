#include <stdio.h>
#include <stdlib.h>
struct Student{
char fname[20], lname[20], id[10];
float gpa;
};
	int main(){
	int n;
	printf("Heden shirheg oyutan burtgeh be:");
	scanf("%d", &n);
	FILE *fptr;
	if ((fptr = fopen("students.txt", "w")) == NULL) {
	printf("Error! opening file");
	exit(1);
}
	for (int i = 1; i <= n; i++) {
	Student s;
	printf("%d)\n", i);
	printf("fname: ");
	scanf("%s", s.fname);
	printf("lname: ");
	scanf("%s", s.lname);
	printf("id: ");
	scanf("%s", s.id);
	printf("gpa: ");
	scanf("%f", &s.gpa);
	fprintf(fptr, "%d)\n", i);
 	fprintf(fptr, "%s\n", s.fname);
 	fprintf(fptr, "%s\n", s.lname);
 	fprintf(fptr, "%s\n", s.id);
 	fprintf(fptr, "%f\n", s.gpa);
}
	printf("Amjilttai burtgelee");
	fclose(fptr);
}

