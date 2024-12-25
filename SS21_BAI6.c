#include <stdio.h>

int main() {
    FILE *sourceFile;
    FILE *destFile;
    char ch;

    // Mo file nguon trong che do doc
    sourceFile = fopen("bt01.txt", "r");
    if (sourceFile == NULL) {
        printf("Khong the mo file nguon.\n");
        return 1;
    }

    // Mo file dich trong che do ghi
    destFile = fopen("bt06.txt", "w");
    if (destFile == NULL) {
        printf("Khong the mo file dich.\n");
        fclose(sourceFile);
        return 1;
    }

    // Doc va sao chep tung ky tu tu file nguon sang file dich
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Dong ca hai file sau khi sao chep xong
    fclose(sourceFile);
    fclose(destFile);

    printf("Da sao chep noi dung tu file bt01.txt sang file bt06.txt thanh cong.\n");

    return 0;
}

