#include<stdio.h>

void find (int a[] , int n, int *addr , int * addr1 );
void read (int a[] , int n); 
void print (int a[] , int n);
int main ()
{
int a [100];
read (a, 5);
print (a, 5);
int x, y;
find (a, 5 , &x, &y) ;
printf ("\n tegsh toonuudiin too: %d\n", x) ;
printf (" sondgoi toonuudiin too: %d\n", y) ;
return 0;
}

void find(int a[] , int n, int *addr , int *addr1 ){
    *addr=0,*addr1=0;
    int i;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            *addr+=1;
        }else {
            *addr1+=1;
            }
    }
}

void read (int a[] , int n){
    int i;
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
}


void print (int a[] , int n){
    int i;
    for (i = 0; i < n; i++)
    printf("%d",a[i]);
}

