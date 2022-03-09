#include<stdio.h>
#include<stdlib.h>
int *find_divisors(int n)
{
    int *p;
    p = (int*) malloc(sizeof(int) * n);
     if (p == NULL){
      printf("Error\n");
      exit(1);
}
    int i, c = 0, arr = 1;
    for (i = 1; i <= n; ++i){
    if (n % i == 0){
    p[arr] = i;
    c++;
    arr++;
    }
}
    p[0] = c;
    return p;
}
  int main()
{
   int *a, i;
   int n;
   printf("n = ");
   scanf("%d", &n);
   a = find_divisors(n);
    for (int i = 1; i <= a[0]; ++i){
     printf("%d\n", a[i]);
}
   free(a);
   return 0;
}

