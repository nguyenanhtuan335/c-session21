#include <stdio.h>
int main() {
    FILE *file = fopen("bt01.txt", "r"); // Mo file o che do doc
    if (file != NULL) {
        char line[100];

        if (fgets(line, sizeof(line), file) != NULL) {
            printf("Dong dau tien trong file: %s", line);
        } else {
            printf("File rong hoac khong the doc dong dau tien.\n");
        }

        fclose(file);
    } else {
        printf("Khong the mo file de doc.\n");
    }

    return 0;
}

