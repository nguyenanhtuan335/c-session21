#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int numLines;
    char line[256];

    // Mo file trong che do ghi
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    // Nhap so luong dong
    printf("Nhap so luong dong: ");
    scanf("%d", &numLines);
    getchar(); // Doc ky tu xuong dong sau khi nhap so luong dong

    // Nhap noi dung tung dong va ghi vao file
    for (int i = 0; i < numLines; i++) {
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }

    // Dong file sau khi ghi xong
    fclose(file);

    // Mo lai file trong che do doc
    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    // Doc va in noi dung file theo tung dong
    printf("\nNoi dung file bt05.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Dong file sau khi doc xong
    fclose(file);

    return 0;
}

