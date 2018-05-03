#include <stdio.h>

int main() {
    FILE *archivo;
    char cadena[4];
    
    
    archivo = fopen("texto.txt", "r");
    
    if(archivo == NULL){
        printf("\n No existe el archivo");
        printf("\n\n");
        return 0;
    }
    
    while(!feof(archivo)){
        fgets(cadena, 4, archivo);
        printf("%s\n", cadena);
    }
    
    fclose(archivo);
    printf("\n\n");
    return 0;
}
