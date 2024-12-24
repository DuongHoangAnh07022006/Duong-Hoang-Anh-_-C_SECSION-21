#include <stdio.h>
int main() {
    int n;
    char line[100];
    FILE *file;
    printf("Nhap so dong: ");
    scanf("%d", &n);
    getchar();
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }
    fclose(file);
    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        return 1;
    }
    printf("\nNoi dung cua file bt05.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}

