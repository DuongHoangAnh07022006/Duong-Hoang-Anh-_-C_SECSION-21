#include <stdio.h>
int main() {
    FILE *file;
    char ch;
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        return 1;
    }
    ch = fgetc(file);
    if (ch != EOF) {
        printf("Ky tu dau tien trong file: %c\n", ch);
    }
    fclose(file);
    return 0;
}

