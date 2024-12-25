#include <stdio.h>

int main() {
    char userInput[100];

    printf("Nhap vao chuoi bat ky: ");
    fgets(userInput, sizeof(userInput), stdin);

    FILE *file = fopen("bt01.txt", "w");
    if (file != NULL) {
        fprintf(file, "%s", userInput);
        fclose(file);
        printf("Chuoi da duoc ghi vao file bt01.txt\n");
    } else {
        printf("Khong the mo file de ghi.\n");
    }

    return 0;
}

