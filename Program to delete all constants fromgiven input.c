#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, j = 0;
    while (str[i]) {
        if (isalpha(str[i]) && !(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
            i++;
        } else {
            str[j++] = str[i++];
        }
    }
    str[j] = '\0';
    
    printf("String after deleting consonants: %s", str);
    return 0;
}
