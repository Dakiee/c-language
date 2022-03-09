#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fptr;
   if ((fptr = fopen("4-input.txt", "r")) == NULL){
   printf("Error");
   exit(1);
}
   int sum, i;
   bool check = false;
   while (!feof(fptr)){
   fscanf(fptr, "%d", &i);
   if (check)
   sum += i;
   check = true;
}
	printf("\n niilber = : %d", sum);
}

