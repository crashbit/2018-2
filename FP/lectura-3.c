#include <stdio.h>

int main() {
    FILE *archivo;
    char letra;
    int numero;
    int total = 0;
    
    archivo = fopen("numeros.txt", "r");
    
    if(archivo == NULL){
        printf("\n No existe el archivo");
        printf("\n\n");
        return 0;
    }
    
    while(!feof(archivo)){
        numero = 0;
        fscanf(archivo, "%d,", &numero );
        total = total + numero;
    }
    
    fclose(archivo);
    printf("El total es: %d", total);
    printf("\n\n");
    return 0;
}
