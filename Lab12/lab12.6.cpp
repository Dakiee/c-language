#include<stdio.h>
#include <string.h>

struct Student
{
    char fname [20] , lname [20] , id [10];
    float golch ;
};
void read ( struct Student *s)
{
    scanf("%s",(*s).fname);
    scanf("%s",(*s).lname);
    scanf("%s",(*s).id);
    scanf("%f",&(*s).golch);
}

void print ( struct Student s)

{
	printf("fname = %s\n", s.fname);
	printf("lname = %s\n", s.lname);
	printf("id = %s\n", s.id);
	printf("golch = %f\n", s.golch);
}

void set_fname ( struct Student *p, char ner []) ;
void set_lname ( struct Student *p, char ovog []) ;
void set_id ( struct Student *p, char id []) ;
void set_golch ( struct Student *p, float golch ) ;
int main ()
{
    struct Student bat , t;
    read(&bat) ;
    print (bat) ;
    set_fname (&t, " dorj ") ;
    set_lname (&t, " bold ") ;
    set_id (&t, " 1234 ") ;
    set_golch(&t, 3) ;
    print (t) ;
    return 0;
}


void set_fname ( struct Student *p, char ner []){
    strcpy((*p).fname, ner);
}

void set_lname ( struct Student *p, char ovog []){
	strcpy((*p).lname, ovog);
}

void set_id ( struct Student *p, char id []){
	strcpy((*p).id, id);
}
void set_golch ( struct Student *p, float golch ){
	(*p).golch= golch;
}


