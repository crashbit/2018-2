#include <stdio.h>

int menu();
void dec2bin();
void bin2dec();

int main() {
    int opcion = 0;
    
    while(opcion != 3){
        opcion = menu();
        switch(opcion){
            case 1:
                bin2dec();
                break;
            case 2:
                dec2bin();
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
    printf("\n\nUsted seleccionó decimal 2 binario");
}

void bin2dec(){
    printf("\n\nUsted seleccionó binario 2 decimal");
}

