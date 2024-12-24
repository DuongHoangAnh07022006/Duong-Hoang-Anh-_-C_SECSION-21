#include <stdio.h>
int main() {
    char str[100];
    FILE *file;
    printf("Nhap chuoi muon them vao file: ");
    fgets(str, sizeof(str), stdin);
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        return 1;
    }
    fprintf(file, "%s", str);
    fclose(file);
    return 0;
}

