#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    int element;

    file = fopen("data/array.txt", "r");

    if (NULL == file)
    {
        printf("Failed to open the file");
    }

    while ((element = fgetc(file)) != EOF) {
        printf("%c", element);
    }
    
    fclose(file);

    return 0;
    
}