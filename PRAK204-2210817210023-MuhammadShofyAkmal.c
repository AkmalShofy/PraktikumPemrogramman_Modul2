#include <stdio.h>
int main () {
float a,b,c,d,e;
printf ("Jari - Jari : ");  scanf ("%f",&a);
printf ("Tinggi      : ");  scanf ("%f",&b);
c=3.14*a*a*b;
d=2*3.14*a*(a+b);
e=2*3.14*a;
printf ("\nVolume   = %.2f \n", c );
printf ("Luas     = %.2f \n",   d );
printf ("Keliling = %.2f \n",   e );
}