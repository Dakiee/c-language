#include <stdio.h>
#include <math.h>

typedef struct{
	int dim;
	float dat[100];
} Vector;

int dot_product(Vector a, Vector b);
Vector scalar_mult(Vector a, float t);
float len(Vector a);

main(){
int i, mul;
	Vector vec1, vec2, vec3;
	printf("Ehnii vectoriin hemjeesiig oruulna uu\n");
	scanf("%d", &vec1.dim);
	printf("Ehnii vectoriin utgiig oruulna uu\n");
	for (i=0; i<vec1.dim; i++)
		scanf("%f", &vec1.dat[i]);
		
	printf("Daraagiin vectoriin hemjeesiig oruulna uu\n");
	scanf("%d", &vec2.dim);
	printf("Daraagiin vectoriin hemjeesiig oruulna uu\n");
	for (i=0; i<vec2.dim; i++)
		scanf("%f", &vec2.dat[i]);
	
	printf("Ehnii vectoriin urt = %0.2f\n", len(vec1));
	printf("Daraagiin vectoriin urt = %0.2f\n", len(vec2));
	
	printf("ehnii 2 vectoriin urjver = %d", dot_product(vec1, vec2));
	
	printf("\nUrjuuleh utgaa oruulna uu\n");
	scanf("%d", &mul);
	vec3 = scalar_mult(vec1, mul);
	
	printf("Scalar urjweriin hariu\n");
	for (i=0; i<vec3.dim; i++)
		printf(" %.2f ", vec3.dat[i]);
		
	return 0;
}
float len(Vector a){
	int i, sum=0;
	
	for (i=0; i<a.dim; i++)
		sum+=a.dat[i]*a.dat[i];
	return sqrt(sum);
}
Vector scalar_mult(Vector a, float t){
	int i;
	for (i=0; i<a.dim; i++)
		a.dat[i]*=t;
		
	return a;
}
int dot_product(Vector a, Vector b){
	int sum=0, i;
	for (i=0; i<a.dim; i++)
		sum+=a.dat[i]*b.dat[i];
	return sum;
}
