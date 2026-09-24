#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
        printf("%c is an uppercase letter.\n", ch);
    else
        printf("%c is not an uppercase letter.\n", ch);

    return 0;
}