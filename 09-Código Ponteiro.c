#include<stdio.h>
int main(){
double r;
double *p;
r=10.10;
p=&r;
*p=4.04;
printf("\n%p \t%p \t%lf \t%lf",&r,p,r,*p);
return 0;
}
