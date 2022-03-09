#include<stdio.h>
#include<stdlib.h>
int main(){
	int num_1, num_2;
    FILE *fptr;
     if ((fptr = fopen("1-input.txt", "r")) == NULL){
       printf("Error");
       exit(1);
}
  fscanf(fptr, "%d", &num_1);
  fscanf(fptr, "%d", &num_2);
 if((fptr = fopen("1-output.txt", "w")) == NULL)
{
  printf("Error");
  exit(1);
}
  fprintf(fptr, "%d", num_1 + num_2);
  printf("Amjilttai");
  fclose(fptr);
  return 0;
}


