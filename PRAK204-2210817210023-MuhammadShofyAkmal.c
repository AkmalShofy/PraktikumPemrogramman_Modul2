#include <stdio.h>
int main () {
float a,b,c=3.14,d,e,f;
printf ("Jari - Jari : ");  scanf ("%f",&a);
printf ("Tinggi      : ");  scanf ("%f",&b);
d=c*a*a*b;
e=2*c*a*(a+b);
f=2*c*a;
printf ("\n");
printf ("Volume   = %.2f \n", d );
printf ("Luas     = %.2f \n", e );
printf ("Keliling = %.2f \n", f );
}