#include <stdio.h>
#include <math.h>
int main () {
float a,b,c,d,e;
printf ("Tinggi        : ");  scanf ("%f",&a); 
printf ("Sisi Miring   : ");  scanf ("%f",&b);
c=sqrt(b*b-a*a);
d=a+b+c;
e=c*a/2;
printf ("Alas     = %.0f cm\n",c);
printf ("Tinggi   = %.0f cm\n",a);
printf ("Keliling = %.0f cm\n",d);
printf ("Luas     = %.0f cm^2\n",e);
}