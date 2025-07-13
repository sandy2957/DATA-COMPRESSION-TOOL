#include <stdio.h>
#include <string.h>

void compress(char *input) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        int count = 1;
        while (i < len - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", input[i], count);
    }
    printf("\n");
}

int main() {
    char data[100];
    printf("Enter string to compress: ");
    scanf("%s", data);

    printf("Compressed Output: ");
    compress(data);

    return 0;
}
