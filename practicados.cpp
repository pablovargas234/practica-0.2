#include<stdio.h>
#include<stdio.h>

int main (){
    float a,b,c;
    int opt;
printf ("1.-suma/2.-resta/3.-multiplicacion/4.-division");
printf ("seleccione una opcion:");
scanf("%d",&opt);
printf ("ingrese el primer operando:");
scanf("%f",&a);
printf("ingrese el segundo operando:");
scanf("%f",&b);
switch(opt){
case 1 :
    c=a+b;
    break;
case 2:
    c=a-b;
    break;
case 3:
    c=a*b;
    break;
case 4:
    while(b==0){
        printf ("error, b debe ser distinto de 0/n");
        printf ("introduce el segundo operando:");
        scanf ("%f",&b);
    }
    c=a/b;
}
printf("el resultado es %f",c);
}

