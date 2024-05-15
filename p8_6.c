#include <stdio.h>

void draw_hline(int length);

int main() {
    int len;
    char ch;

    printf("Enter the length of the horizontal line: ");
    scanf("%d", &len);
    draw_hline(len);

    return 0;
}
void draw_hline(int length) {
    int i;
    for (i = 0; i < length; i++) {
        printf("-");
    }
    printf("\n");
}