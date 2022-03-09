#include <stdio.h>
void find(int a[], int n, int *min, int *max)
{
    int i;
    *min=a[0];
    *max=a[0];
    for(i=1; i<n; i++)
    {
        if(*max<a[i])
        
        {
            *max=a[i];
        }
        if(*min>a[i])
        {
            *min=a[i];
        }
    }
}
void read(int a[100],int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void print(int a[100], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d  ",a[i]);
}
int main()
{
    int a[100], n;
    scanf("%d", &n);
    read(a, n);
    print(a,n);
    printf("\n");
    int x,y;
    find(a,n,&x,&y);
    printf("min: %d\n",x);
    printf("max: %d\n",y);
    return 0;
}
