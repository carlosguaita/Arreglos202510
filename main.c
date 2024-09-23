#include <stdio.h>

int main (int argc, char *argv[]) {
    double num1, num2, sum, rest, mult, div;
    int op1=0, op2=0;
    do{
    printf("Ingrese el num1: ");
    scanf("%lf",&num1);
    printf("Ingrese el num2: ");
    scanf("%lf",&num2);
    printf("Seleccione la operacion que desea realizar:\n");
    printf("1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n>>");
    scanf("%d",&op1);
    if (op1==1){
        sum=num1+num2;
        printf("La suma es: %.2lf\n",sum);
    }else if(op1=2){
        rest=num1-num2;
        printf("La resta es: %.2lf\n",rest);
    }else if(op1=3){
        mult=num1*num2;
        printf("La multiplicacion es: %.2lf\n",mult);
        break;
    }else if(op1=4){
        if(num2>0){
            div=num1/num2;
            printf("La division es: %.2lf\n",div);
        }else{
            printf("No se puede realizar la division\n");
        }
    }else{
        printf("No existe la opcion\n");
    }
        printf("Desea realizar otra operacion:\n1.Si\n2.No\n>>");
        scanf("%d",&op2);
    }while(op2==1);
    return 0;
}