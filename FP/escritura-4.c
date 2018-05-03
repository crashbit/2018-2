#include <stdio.h>

int main() {
    FILE *archivo;
    int x = 200;
    float y = 10.2;
    char z = 'Z';
    
    
    archivo = fopen("texto.txt", "a");
    
    fprintf(archivo, "Datos: %d, %f, %c", x, y, z);
    
    fclose(archivo);
    printf("\n\n");
    return 0;
}
