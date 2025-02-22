#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("String in lowercase: %s", str);
    return 0;
}
