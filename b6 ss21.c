#include <stdio.h>
int main() {
    FILE *file1, *file2;
    char ch;
    file1 = fopen("bt01.txt", "r");
    if (file1 == NULL) {
        return 1;
    }
    file2 = fopen("bt06.txt", "w");
    if (file2 == NULL) {
        fclose(file1);
        return 1;
    }
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file2);
    }
    fclose(file1);
    fclose(file2);
    return 0;
}

