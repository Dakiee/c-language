#include <stdio.h>
struct Rational {
    int d, n; // d/n butarxai
};

struct Rational add( const struct Rational *a, const struct Rational *b) ;
struct Rational sub( const struct Rational *a, const struct Rational *b) ;
struct Rational mult ( const struct Rational *a, const struct Rational *b) ;
struct Rational div( const struct Rational *a, const struct Rational *b) ;
void simplify ( struct Rational *a) ; // xuraax
void read (struct Rational *a) ; // unshih
void print (struct Rational *a) ; // xevlex
int gcd(int a, int b);

int main(){
    struct Rational x, y, z;
    read(&x);
    print(&x);		
    read(&y);
    print(&y);

    z = add(&x, &y);
    print(&z);
    return 0;

}
struct Rational add( const struct Rational *a, const struct Rational *b){
    struct Rational d;
    if((*a).n != (*b).n){
        d.n = (*a).n * (*b).n;
        d.d = (*a).d * (*b).n + (*b).d * (*a).n;
    }else{
    d.n = (*a).n;
    d.d = (*a).d + (*b).d;
    }
    simplify(&d);
    return d;
}
struct Rational sub( const struct Rational *a, const struct Rational *b){
    struct Rational d;
    if((*a).n != (*b).n){
        d.n = (*a).n * (*b).n;
        d.d = (*a).d * (*b).n - (*b).d * (*a).n;
    }else{
        d.n = (*a).n;
        d.d = (*a).d - (*b).d;
    }
    simplify(&d);
    return d;
}
struct Rational mult ( const struct Rational *a, const struct Rational *b){
    struct Rational d;
    d.d = (*a).d * (*b).d;
    d.n = (*a).n * (*b).n;
    simplify(&d);
    return d;
}
struct Rational div( const struct Rational *a, const struct Rational *b){
    struct Rational d;
    d.d = (*a).d * (*b).n;
    d.n = (*a).n * (*b).d;
    simplify(&d);
    return d;
}
void simplify(struct Rational *a){
    int h = gcd((*a).d, (*a).n);
    (*a).d /= h;
    (*a).n /= h;
}
void read (struct Rational *a){
    puts("hurtveriin utgiig oruul:");
    scanf("%d", &(*a).d);
    puts("huvaariin utgiig oruul:");
    scanf("%d", &(*a).n);
}
void print (struct Rational *a){
    printf("%d-nii %d\n", (*a).n, (*a).d);
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

