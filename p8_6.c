#include <stdio.h>

void draw_hline(int length, char ch);

int main() {
    int len;
    char ch;

    printf("Enter the length of the horizontal line: ");
    scanf("%d", &len);

    printf("Enter the character to use for the line: ");
    scanf(" %c", &ch);

    draw_hline(len, ch);

    return 0;
}
void draw_hline(int length, char ch) {
    int i;
    for (i = 0; i < length; i++) {
        printf("%c", ch);
    }
    printf("\n");
}