#include <stdio.h>
int main () {
float a,b,i,j,x,y,h;
printf ("Nilai a : ");  scanf ("%f",&a); 
printf ("Nilai b : ");  scanf ("%f",&b); 
printf ("Nilai i : ");  scanf ("%f",&i); 
printf ("Nilai j : ");  scanf ("%f",&j); 
printf ("Nilai x : ");  scanf ("%f",&x); 
printf ("Nilai y : ");  scanf ("%f",&y);
h = (a-b)*(i/j)-(x+y);
printf ("Hasil dari a dikurang b dikali dengan i dibagi j dikurang dengan x ditambah y adalah %.3f", h);
}