#include <stdio.h>


int suma(int a, int b);
int  sumaxref(int *ptra, int *ptrb);

int main (){

    int a,b;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    printf("El resultado es: %d\n", suma(a,b));
    printf("El resultado es: %d", sumaxref(&a,&b));
    return 0;

}
 int suma(int a, int b){
    return a+b;
 }
 int sumaxref (int *ptra, int *ptrb){
    return *ptra + *ptrb;
 }