
#include <stdio.h>
#include <math.h>

int menu();
void dec2bin();
void bin2dec();

int main() {
    int opcion = 0;
    
    while(opcion != 3){
        opcion = menu();
        switch(opcion){
            case 1:
                dec2bin();
                break;
            case 2:
                bin2dec();
                break;
            default:
                break;
        }
        
    }
    
    printf("Fin del programa");
    printf("\n\n");
}

int menu(){
    int opcion = 0;
    printf("\n1.- Convertir de decimal a binario");
    printf("\n2.- Convertir de binario a decimal");
    printf("\n3.- Salir\n\n");
    scanf("%d", &opcion);
    
    return opcion;
    
}

void dec2bin(){
    int n, binario=0, residuo, i=1;
    printf("\n\nUsted seleccionó decimal 2 binario");
    printf("Introduce un numero: ");
    scanf("%d", &n);
    
    while(n != 0){
        residuo = n % 2;
        n = n / 2;
        binario = binario + residuo *  i;
        i = i * 10;
    }
    printf("El resultado es : %d", binario);
    
}

void bin2dec(){
    int n, decimal=0, residuo, i=0;
    printf("\n\nUsted seleccionó binario 2 decimal\n\n");
    printf("Introduce un numero: ");
    scanf("%d", &n);
    
    while(n != 0){
        residuo = n % 10;
        n = n / 10;
        decimal = decimal + residuo * pow(2,i);
        i = i + 1;
    }

    printf("El resultado es: %d", decimal);

}

