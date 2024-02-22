#include <stdio.h>
#include <stdlib.h>
double n,o;int p;
main (int a,char** b)
{o = atof (b[1]);n=1;for (p=0;p<atoi(b[2]);p++){n = n*o;}printf ("%lf\n", n);}
