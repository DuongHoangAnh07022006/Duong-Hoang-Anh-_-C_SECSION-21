#include <stdio.h>
int main() {
    char line[100];
    FILE *file;
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        return 1;
    }
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}

