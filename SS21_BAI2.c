#include <stdio.h>

int main() {
    FILE *file = fopen("bt01.txt", "r");
    if (file != NULL) {
        char firstChar = fgetc(file);
        if (firstChar != EOF) {
            printf("Ky tu dau tien trong file: %c\n", firstChar);
        } else {
            printf("File rong.\n");
        }
        fclose(file);
    } else {
        printf("Khong the mo file de doc.\n");
    }

    return 0;
}

