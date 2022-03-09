#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
  char fname[20], lname[20], id[10];
  float gpa;
};
	int main(){
	char s[20];
	FILE *fptr;
	if ((fptr = fopen("students.txt", "r")) == NULL ){
	printf("Error! opening file");
	exit(1);
}
	while (!feof(fptr)){
	fscanf(fptr, "%s", s);
	for (int i = 0; i < strlen(s); i++){
	printf("%c", s[i]);
}
	printf("\n");
}
	fclose(fptr);
	return 0;
}

