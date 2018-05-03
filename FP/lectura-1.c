#include <stdio.h>

int main() {
    FILE *archivo;
    char letra;
    
    archivo = fopen("texto.txt", "r");
    
    if(archivo == NULL){
        printf("\n No existe el archivo");
        printf("\n\n");
        return 0;
    }
    
    while(!feof(archivo)){
        letra = fgetc(archivo);
        printf("%c", letra);
    }
    
    fclose(archivo);
    printf("\n\n");
    return 0;
}
