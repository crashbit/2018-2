#include <stdio.h>

int main() {
    FILE *archivo;
    
    
    archivo = fopen("texto.txt", "w");
    
    fputc('A', archivo);
    
    fclose(archivo);
    printf("\n\n");
    return 0;
}
