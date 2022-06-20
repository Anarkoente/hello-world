#include <stdio.h> 
#include <stdlib.h> 

int a;
int b;
int c;
int sumatoria;

int main() 
{ 
 int datos[6] = {25, 28, 34, 30, 26};
 int datos2[6] = {26, 27, 30, 29, 27};
 int datos3[6] = {24, 25, 36, 34, 29};

 for (a=0; a<5; a++)
 
{
 sumatoria = sumatoria + datos[a];

 printf("LA PRODUCCION DEL OPERARIO 1 ES %d ",datos[a]);
 printf("la produccion total del %d \n", sumatoria);
}
for (b=0; b<5; b++)
{

 sumatoria = sumatoria + datos2[b];

 printf("LA PRODUCCION DEL OPERARIO 2 ES %d ",datos2[b]);
 printf("la produccion total del %d \n", sumatoria);
}
  for (c=0; c<5; c++)
{
 sumatoria = sumatoria + datos3[c];

 printf("LA PRODUCCION DEL OPERARIO 3 ES %d ",datos3[c]);
 printf("la produccion total del %d \n", sumatoria);

 

}

int suma = datos[6] + datos2[6] + datos3[6];
printf ("la produccion semanal es %d" , suma);

system("pause");
getchar(); 
}

